#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len,i,j,k;
    scanf("%s",str);
    len = strlen(str);
    k = len-1;
    for(i = 0;i < len;i++){
        for(j = k;j < len;j++)
            printf("%c",str[j]);
        printf("\n");
        k--;
    }
    return 0;
}
