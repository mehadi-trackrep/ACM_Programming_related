#include <stdio.h>
#include <string.h>
int main()
{
    char num1[11],num2[11],cpy_str[11];
    unsigned long int len1,len2,c,sum,max_len,k;
    int i,count,j;

    while(scanf("%s%s",num1,num2)){

        if(num1[0]-48 == 0 && num2[0]-48 == 0)
            break;

        len1 = strlen(num1);
        len2 = strlen(num2);
        count = 0;

        if(len1 > len2){
            max_len = len1;
            k = 0;
            for(i = len1-len2;i >= 1;i--){
                cpy_str[k++] = '0';
            }
            for(i = 0;i < len2;i++){
                cpy_str[k++] = num2[i];
            }
            cpy_str[k] = '\0';
            strcpy(num2,cpy_str);
        }
        else if(len2 > len1){
            max_len = len2;
            k = 0;
            for(i = len2-len1;i >= 1;i--){
                cpy_str[k++] = '0';
            }
            for(i = 0;i < len1;i++){
                cpy_str[k++] = num1[i];
            }
            cpy_str[k] = '\0';
            strcpy(num1,cpy_str);
        }
        else
            max_len = len1;
        /*puts(num1);
        puts(num2);
        printf("%lu\n",max_len);*/
        c = 0;
        for(i = max_len-1;i >= 0;i--){
            sum = (int)num1[i]-48 + (int)num2[i]-48 + c;
            if(sum >= 10){
                count++;
                c = 1;
            }
            else
                c = 0;
        }

        if(count == 0)
            printf("No carry operation.\n");
        else if(count == 1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",count);
    }

    return 0;
}
