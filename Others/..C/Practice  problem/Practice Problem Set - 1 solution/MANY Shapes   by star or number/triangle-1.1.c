#include <stdio.h>
int main()
{
    int n,i,j;
    int c;
    scanf("%d",&n);

    printf("\n");

    for(i=1;i<=n;i++){
        c = i;
        for(j=0;j<i;j++)
            printf("%d",c++);
        printf("\n");
    }

    return 0;
}

