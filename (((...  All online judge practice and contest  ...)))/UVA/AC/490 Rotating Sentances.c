    ///input:
/*
Rene Decartes once said,
"I think, therefore I am."
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100][100];
    int i = 0,k,len,max_len = 0,j;

    while(gets(str[i])){

        len = strlen(str[i]);

        if(len > max_len)
            max_len = len;
        i++;
    }

    k = i-1;

    for(i = 0;i < max_len;i++){
        j = k;
        while(j >= 0){
            len = strlen(str[j]);
            if(len-1 >= i)
                printf("%c",str[j][i]);
            else
                printf(" ");
            j--;
        }
        printf("\n");
    }

    return 0;
}
