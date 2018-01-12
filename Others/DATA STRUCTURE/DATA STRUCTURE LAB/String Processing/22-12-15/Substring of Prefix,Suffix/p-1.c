#include <stdio.h>
#include <string.h>
///input:
/*
H4XOR
output:
H       R
H4      OR
H4X     XOR
H4XO    4XOR
H4XOR   H4XOR
*/
int main()
{
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    int i,j,x;
    for(i = 0;i < len;i++){
        for(j = 0;j <= i;j++)
            printf("%c",str[j]);
        printf("\t");
        for(j = len-i-1;j < len;j++)
            printf("%c",str[j]);
        printf("\n");
    }
    return 0;
}
