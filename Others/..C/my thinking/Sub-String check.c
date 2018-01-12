#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],str1[100];
    int i,j,len,len1,ck;
    gets(str);
    gets(str1);
    len = strlen(str);
    len1 = strlen(str1);
    ck = 0;
    for(i=0;i<len;i++){
        j = 0;
        if(str[i] == str1[j]){
            while((str[++i] == str1[++j]) && i < len){
                if(j == len1-1){
                    ck = 1;
                    break;
                }
            }
        }
        if(ck == 1){
            printf("Yes");
            break;
        }
    }
    if(ck == 0){
        printf("No");
    }

    return 0;
}

