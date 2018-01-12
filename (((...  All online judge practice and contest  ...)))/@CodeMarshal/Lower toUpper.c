#include <stdio.h>
#include <string.h>
//#include <ctype.h>
int main()
{
    int T,i,c = 1,len,j;
    scanf("%d",&T);
    getchar();
    char str[100];
    for(i = 1;i <= T;i++){
        gets(str);
        len = strlen(str);
        for(j = 0;j < len;j++){
            if(str[j] >= 97 && str[j] <= 122)
                str[j] = str[j] - 32;
            else ;
          // str[j] = toupper(str[j]);
        }
        puts(str);
        printf("\n");

    }

    return 0;
}

