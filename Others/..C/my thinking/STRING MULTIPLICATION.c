#include <stdio.h>
#include <string.h>
#define MAX 250
char str1[100000],str2[100000],copy_str[100000],str3[100005];
void string_summation(int len1,int len2);
int main()
{
    char str4[100000],str5[100000],temp[100000];
    int len1,len2,i,j,k,l,c,pos,multi,len,ck;
    int zero,max_len,max_index,index;
    while(gets(str4) && gets(str5)){
        len1 = strlen(str4);
        len2 = strlen(str5);
        max_index = len1+len2-1;
        if(len2 > len1){  /// ami all time str2 small length mone kore kaj korbo
            len = len1;
            len1 = len2;
            len2 = len;
            strcpy(temp,str4);
            strcpy(str4,str5);
            strcpy(str5,temp);
        }
        char multi_str[MAX][len1+len2+5];
        k = 0;
        ck = 0;
        for(i = len2-1;i >= 0;i--){
            c = 0;
            zero = len2-1-i;
            max_len = len1+len2-1;
            if(str5[i] == '0')
                continue;
            ck = 1;
            /// insert zero
            while(zero >= 1){
                //printf("=> %d , %d\n",zero,max_len);
                multi_str[k][max_len--] = 48;
                zero--;
            }
            for(j = len1-1;j >= 0;j--)
            {
                multi = ( ((int)str5[i] - 48)*((int)str4[j] - 48) ) + c;
                multi_str[k][max_len--] = (multi%10) + 48;
                c = multi/10;
                //printf("%d ",max_len);
                //printf("%c ",multi_str[k][max_len]);
            }
            if(c > 0){
                multi_str[k][max_len] = c + 48;
                pos = max_len;
            }
            else{
                pos = max_len+1;
            }
            //printf("%d\n",pos);
            index = 0;
            for(j = pos;j <= max_index;j++){
                multi_str[k][index++] = multi_str[k][j];
            }
            multi_str[k][index] = '\0';
            //printf("%s ",multi_str[k]);
            k++;
        }

        /*
        for(i = 0;i < k;i++)
            puts(multi_str[i]);
        */
        if(k > 1){
            len1 = strlen(multi_str[0]);
            len2 = strlen(multi_str[1]);
            if(len2 > len1){
                memset(str1,'\0',sizeof(str1));
                memset(str2,'\0',sizeof(str2));
                strcpy(str1,multi_str[1]);
                strcpy(str2,multi_str[0]);
                len1 = len1^len2;
                len2 = len1^len2;
                len1 = len1^len2;
            }
            else{
                memset(str1,'\0',sizeof(str1));
                memset(str2,'\0',sizeof(str2));
                strcpy(str1,multi_str[0]);
                strcpy(str2,multi_str[1]);
            }
            string_summation(len1,len2);
            for(j = 2;j < k;j++){
                len1 = strlen(multi_str[j]);
                len2 = strlen(str3);
                strcpy(str1,multi_str[j]);
                strcpy(str2,str3);
                string_summation(len1,len2);
                //printf("=>len1 = %d , len2 = %d ",len1,len2);
            }
            //printf("==> ");
            puts(str3);
        }
        else{
        //for(i = 0;i < k;i++)
            //printf("==> ");
            if(ck == 0)
                printf("0\n");
            else
                puts(multi_str[0]);
        }
    }
    return 0;
}
void string_summation(int len1,int len2)
{
    int i,j,c = 0,sum,ck = 0,k;

    //memset(str3,'\0',sizeof str3);

    if(len1 > len2){
        for(i = 0;i < len1-len2;i++)
            copy_str[i] = '0';
        for(j = 0,k = i;j < len2;j++)
            copy_str[k++] = str2[j];
        copy_str[k] = '\0';
        strcpy(str2,copy_str);
    }
    for(i = len1-1;i >= 0;i--){
        sum = ((int)str1[i] - 48) + ((int)str2[i] - 48) + c;
        if(sum >= 10){
            str3[i+1] = (sum % 10) + 48;
            c = sum/10;
        }
        else{
            str3[i+1] = sum + 48;
            c = 0;
        }
    }
    if(sum >= 10){
        str3[0] = c + 48;
        str3[len1+1] = '\0';
        ck = 1;
    }
    if(ck != 1){
        for(i = 0;i < len1;i++)
            str3[i] = str3[i+1];
        str3[i] = '\0';
    }
}
