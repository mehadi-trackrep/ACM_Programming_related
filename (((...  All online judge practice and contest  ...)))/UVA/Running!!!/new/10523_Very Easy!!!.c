#include <stdio.h>
#include <math.h>
#include <string.h>
char str1[100],str2[100],copy_str[100],str3[105];
void string_summation(int len1,int len2);

int main()
{
    unsigned long long n,a,i,sum;

    while(scanf("%llu%llu",&n,&a) == 2){ /// incomplete
        sum = 0;
        //strcpy(str1,"0");
        for(i = 1;i <= n;i++){
            sum += i*pow(a,i);
        }

        printf("%llu\n",sum);
    }

    return 0;
}

void string_summation(int len1,int len2)
{
    int i,j,c = 0,sum,ck = 0,k;

    if(len1 == len2){
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
            ck = 1;
        }
        if(ck != 1){
            for(i = 0;i < len1;i++)
                str3[i] = str3[i+1];
            str3[i] = '\0';
        }

        //return ;
    }

    else if(len1 > len2){

        for(i = 0;i < len1-len2;i++)
            copy_str[i] = '0';
        for(j = 0,k = i;j < len2;j++)
            copy_str[k++] = str2[j];
        copy_str[k] = '\0';

        strcpy(str2,copy_str);

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

        //return ;
    }

    else if(len2 > len1){

        for(i = 0;i < len2-len1;i++)
            copy_str[i] = '0';
        for(j = 0,k = i;j < len1;j++)
            copy_str[k++] = str1[j];
        copy_str[k] = '\0';

        strcpy(str1,copy_str);

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

        //return ;

    }

    return ;
}
