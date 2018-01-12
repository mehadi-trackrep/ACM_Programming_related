    ///input:
/*
H4XOR
OUTPUT:

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
        for(j = 0;j < len-i;j++)
            printf("%c",str[j]);
        printf("\t");
        for(j = i;j < len;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}


