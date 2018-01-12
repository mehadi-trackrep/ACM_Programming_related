#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int count = 0;

    printf("\n\n");

    for(i=n;i>=1;i--){
        for(j=i-1;j>=1;j--){
            printf(" ");
            count++;
        }
        for(j=n-count;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");

        count = 0;
    }

    return 0;
}

