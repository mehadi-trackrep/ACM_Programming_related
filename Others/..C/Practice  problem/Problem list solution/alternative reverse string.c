#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][100];
    int i,len;
    while(gets(str)){

        len = strlen(str);
        for(i = len-1;i >= 0;i--){  /// number er alternate char. hocce : number + 48 .
            printf("%d ",str[i]);
        }
        printf("\n");
    }

    return 0;
}



 /*#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i,len;
    while(gets(str)){

        len = strlen(str);
        for(i = len-1;i >= 0;i--){  /// number er alternate char. hocce : number + 48 .
            printf("%d ",str[i]);
        }
        printf("\n");
    }

    return 0;
} */
