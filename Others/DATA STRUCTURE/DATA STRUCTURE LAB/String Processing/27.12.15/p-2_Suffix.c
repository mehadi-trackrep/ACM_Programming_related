    ///input:
/*
H4XOR
OUTPUT:
R
OR
XOR
4XOPR
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
    for(i = len-1;i >= 0;i--){
        for(j = i;j < len;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}

