/// input:
/*
1.  1010111
    110
2.  101
    101
3.  10
    no output
*/
#include <stdio.h>
#include <string.h>     /// evabe hobe na!
int main()
{
    char str[10000];
    int len,i,j,t,count;
    while(gets(str)){
        len = strlen(str);

        for(i = 0; i < len/2; i++)
        {
            if(str[i] == str[len-i-1])
                printf("%c",str[i]);

        }
        if(len % 2 != 0)
            printf("%c",str[len/2]);
        printf("\n");
    }

    return 0;
}

