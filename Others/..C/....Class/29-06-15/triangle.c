#include <stdio.h>
int main()
{
    int i,j,n,k,l;
    scanf("%d",&n);
    for(i=0,j=n-1;i<n;i++,j--){
        for(l=j;l>=1;l--){
            printf(" "); /// remarkable matter that : space n songkhok hole ,
                            /// star( * ) er por space n-1 songkhok hobe
        }
        for(k=0;k<=i;k++)
            printf("*");
        printf("\n");
    }
    return 0;
}

