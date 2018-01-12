/*
3 ABCEHSHSH
5 FA0ETASINAHGRI0NATWON0QA0NARI0
0
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[105];
    int len,i,j,G,G_len;

    while(scanf("%d",&G) && G != 0)
    {
        getchar();

        gets(str);

        len = strlen(str);
        G_len = len/G;

        for(i = 0;i < len;i += G_len){
            for(j = (i+G_len)-1;j >= i;j--)
                printf("%c",str[j]);
        }

        printf("\n");
    }

    return 0;
}
