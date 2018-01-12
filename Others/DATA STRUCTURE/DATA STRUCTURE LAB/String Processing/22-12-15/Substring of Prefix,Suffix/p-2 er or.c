#include <stdio.h>
#include <string.h>
///input:
/*
H4XOR
output:

H
H4
H4X
H4XO
H4XOR

4
4X
4XO
4XOR

X
XO
XOR

O
OR

R

*/
int main()
{
    char str[100];
    scanf("%s",str);
    int len = strlen(str);
    int i,j,k;
    for(i = 0; i < len; i++)
    {
        for(j = i; j < len; j++){
            for(k = i; k <= j; k++)
                printf("%c",str[k]);
            printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}
