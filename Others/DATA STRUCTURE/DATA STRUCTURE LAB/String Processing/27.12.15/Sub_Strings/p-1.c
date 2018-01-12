    ///input:
/*
H4XOR
OUTPUT:
H,4,X,O,R,H4,4X,XO,OR,H4X,4XO,XOR,H4XO,4XOR,H4XOR  =>15 ti, rule: n(n+1)/2;
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int len,i,j,k;
    gets(str);
    len = strlen(str);
    for(i = 0;i < len;i++){ /// process: every letter er jonno combination
        for(j = i;j < len;j++){
            //for(k = 0;k <= j;k++)
                printf("%c",str[k]);
            printf("\n");
        }
    }
    return 0;
}
