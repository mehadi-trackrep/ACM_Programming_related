#include <stdio.h>
#include <string.h>

char str1[10000],str2[10000],copy_str[10000],str3[10000];
char str[6000][3000];

void string_summation(int len1,int len2);

int main()
{
    int n,len1,len2,i,len;

    strcpy(str1,"0");
    strcpy(str2,"1");

    strcpy(str[0],"0");
    strcpy(str[1],"1");

    for(i = 2;i <= 6000;i++){

        len1 = strlen(str1);
        len2 = strlen(str2);

        string_summation(len1,len2);

        strcpy(str1,str2);
        strcpy(str2,str3);

        strcpy(str[i],str3);
    }

    while(scanf("%d",&n) == 1){

        /*
        memset(str1,'\0',sizeof str1);// simply some input er jonno code ta efficient
        memset(str2,'\0',sizeof str2);
        memset(str3,'\0',sizeof str3);
        memset(copy_str,'\0',sizeof copy_str);
        */

        printf("The Fibonacci number for %d is %s\n",n,str[n]);
    }

    return 0;
}

void string_summation(int len1,int len2)
{
    int i,j,c = 0,sum=0,ck = 0,k;

    if(len2 > len1){
        for(i = 0;i < len2-len1;i++)
            copy_str[i] = '0';
        for(j = 0,k = i;j < len1;j++)
            copy_str[k++] = str1[j];
        copy_str[k] = '\0';

        strcpy(str1,copy_str);
    }

    for(i = len2-1;i >= 0;i--){

        sum = ((int)str1[i] - 48) + ((int)str2[i] - 48) + c;
       // printf("=> %d ",sum);
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
        str3[len2+1] = '\0';
        ck = 1;
    }
    if(ck != 1){
        for(i = 0;i < len2;i++)
            str3[i] = str3[i+1];
        str3[i] = '\0';
    }

}
