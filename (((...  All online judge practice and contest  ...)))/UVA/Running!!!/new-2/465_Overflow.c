#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10000],str2[10000],ch;
    int len1,len2,i,j,k,count,max_count;
    while(scanf("%s%c%s",str1,ch,str2)){ /// problem ace
        len1 = strlen(str1);
        len2 = strlen(str2);
        if(len1 > 10 && len2 > 10){
            printf("first number too big\nsecond number too big\nresult too big.\n");
        }
        else if(len1 > 10 && strcmp(str2,"-4147483647") <= 0){
            printf("first number too big\nresult too big.\n");
        }
        else if(len2 > 10 && strcmp(str1,"-4147483647") <= 0){
            printf("second number too big\nresult too big.\n");
        }
        printf("%d\n",max_count);
    }
    return 0;
}
