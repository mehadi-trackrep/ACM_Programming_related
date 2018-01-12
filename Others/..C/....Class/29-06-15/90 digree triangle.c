#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i < 10){
            for(j=0;j<=i;j++)
                printf("%d  ",i); /// 2 ti space
            printf("\n");
        }

        else if(i >= 10){
            for(j=0;j<=i;j++)
                printf("%d ",i); /// 1 ti space
            printf("\n");
        }
    }
    return 0;
}
