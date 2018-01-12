    ///input:
/*
H4XOR
OUTPUT:
H
H4
H4X
H4XO
H4XOR
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len,i,j,k;
    gets(str);
    len = strlen(str);
    for(i = 0;i < len;i++){
        for(j = 0;j <= i;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}
