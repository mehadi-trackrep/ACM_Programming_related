#include <stdio.h>
int main()
{
    int i,j;
    int n,ch = 1,c;

    scanf("%d",&n);

    c = n/2;

    for(i=n/2+1;i>=1;i--){

        for(j=c;j>=1;j--)
            printf("  ");

        c--;

        for(j=ch;j>=1;j--)
            printf("=>");

        ch+=2;

        printf("\n");
    }

    ch = n-2;
    c = 1;

     for(i=n/2;i>=1;i--){

        for(j=c;j>=1;j--)
            printf("  ");

        c++;

        for(j=ch;j>=1;j--)
            printf("=>");

        ch-=2;

        printf("\n");
    }


    return 0;
}
