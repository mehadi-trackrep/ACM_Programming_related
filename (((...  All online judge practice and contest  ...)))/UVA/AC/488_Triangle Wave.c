#include <stdio.h>
int main()
{
    int n,a,f,i,j,k,t;

    scanf("%d",&n);

    for(t=1;t<=n;t++){

        scanf("%d%d",&a,&f);

        //printf("\n");

        for(i = f;i >= 1;i--){

            for(j = 1;j <= a;j++){
                for(k = j;k >= 1;k--)
                    printf("%d",j);
                printf("\n");
            }

            for(j = a-1;j >= 1;j--){
                for(k = j;k >= 1;k--)
                    printf("%d",j);
                printf("\n");
            }

            if(i!=1) printf("\n");
        }
        if(t != n) printf("\n");
    }

    return 0;
}

/**


1
3
2

**/
