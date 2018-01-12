#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len,i,j,k;
    scanf("%s",str);
    len = strlen(str);
    k = 1;  /// initialize 1 length
    for(i = 0;i < len;i++){
        for(j = 0;j < k;j++)
            printf("%c",str[j]);
        printf("\n");
        k++;
    }
    return 0;
}

