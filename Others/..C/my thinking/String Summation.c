#include <stdio.h>
#include <string.h>
char str1[100000],str2[100000],copy_str[100000],str3[100005],temp[100000];
void string_summation(int len1,int len2);
int main()
{
    int len1,len2;

    while(scanf("%s%s",str1,str2) == 2){

        len1 = strlen(str1);
        len2 = strlen(str2);

        if(len2 > len1){
            strcpy(temp,str1);
            strcpy(str1,str2);
            strcpy(str2,temp);

            len1 = len1^len2;
            len2 = len1^len2;
            len1 = len1^len2;
        }

        string_summation(len1,len2);   /// complete

        //printf("%s\n\n",copy_str);
        //printf("%s\n\n",str1);
        printf("%s\n\n",str3);
    }

    return 0;
}

void string_summation(int len1,int len2)
{
    int i,j,c = 0,sum,ck = 0,k;

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
