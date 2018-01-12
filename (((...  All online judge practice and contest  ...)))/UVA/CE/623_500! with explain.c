#include <stdio.h>
#include <string.h>
#define MAX 3050
char str1[3000],str2[3000],copy_str[3000],str3[3000];
char str4[3000],str5[3000],temp[3000];
char tem,fact[1050][3050];
char multi_str[MAX][MAX];

void string_summation(int len1,int len2);
void string_product(int len1,int len2);

int main()
{
    int n,len1,len2,i,j,k,index = 2;

    strcpy(str3,"2");
    strcpy(fact[0],"1");
    strcpy(fact[1],"2");

    for(i = 3;i <= 1050;i++){
        k = 0;
        if(i < 10){
            str4[k++] = i+48;
            str4[k] = '\0';
        }
        if(i >= 10){
            n = i;
            while(n >= 1){
                str4[k++] = n%10 + 48;
                n /= 10;
            }
            str4[k] = '\0';
            for(j = 0;j < k/2;j++){
               tem = str4[k-j-1];
               str4[k-j-1] = str4[j];
               str4[j] = tem;
            }
        }
        strcpy(str5,str3);
        len1 = strlen(str4);
        len2 = strlen(str5);
        string_product(len1,len2);
        strcpy(fact[index],str3);
        index++;
    }

    while(scanf("%d",&n) == 1){
        printf("%d!\n",n);
        if(n <= 0){
           printf("1\n");
           continue;
        }
        puts(fact[n-1]);
    }

}

void string_summation(int len1,int len2);
void string_product(int len1,int len2)
{
    int i,j,k,l,c,pos,multi,len,ck;
    int zero,max_len,max_index,index;

    max_index = len1+len2-1;
    if(len2 > len1){
        len = len1;
        len1 = len2;
        len2 = len;
        strcpy(temp,str4);
        strcpy(str4,str5);
        strcpy(str5,temp);
    }
    k = 0;
    ck = 0;
    for(i = len2-1;i >= 0;i--){
        c = 0;
        zero = len2-1-i;
        max_len = len1+len2-1;
        if(str5[i] == '0')
            continue;
        ck = 1;
        while(zero >= 1){
            multi_str[k][max_len--] = 48;
            zero--;
        }
        for(j = len1-1;j >= 0;j--)
        {
            multi = ( ((int)str5[i] - 48)*((int)str4[j] - 48) ) + c;
            multi_str[k][max_len--] = (multi%10) + 48;
            c = multi/10;
        }
        if(c > 0){
            multi_str[k][max_len] = c + 48;
            pos = max_len;
        }
        else{
            pos = max_len+1;
        }
        index = 0;
        for(j = pos;j <= max_index;j++)
            multi_str[k][index++] = multi_str[k][j];
        multi_str[k][index] = '\0';
        k++;
    }
    if(k > 1){
        len1 = strlen(multi_str[0]);
        len2 = strlen(multi_str[1]);
        if(len2 > len1){
            strcpy(str1,multi_str[1]);
            strcpy(str2,multi_str[0]);
            len1 = len1^len2;
            len2 = len1^len2;
            len1 = len1^len2;
        }
        else{
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
        }
    }
    else{
        strcpy(str3,multi_str[0]);
    }

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

