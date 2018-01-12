#include <stdio.h>
int main()
{
    int n,i,j,k = 1,l = 1;
    scanf("%d",&n);

    i = n-1;

    while(l < 6){

        for(j = i;j >= 1;j--)
            printf("*");

        for(j = l;j < k;j++)
            printf("%d",j);

        printf("%d",k);

        for(j = k-1;j >= l;j--)
            printf("%d",j);

        printf("\n");

        i--;
        l++;
        k += 2;
    }

    if(n > 5){

    }

    return 0;
}
