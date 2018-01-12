#include <stdio.h>
int main()
{

    int ara[16],i,t,j,x,k;

    while(scanf("%d",&t) == 1){

        while(t >= 1){

            k = 0;

            for(i = 0;i < 4;i++){

                scanf("%d",&x);

                while(x != 0){

                    ara[k++] = x % 10;
                    x /= 10;

                }
            }

            for(i = 0;i < 16;i++)
                printf("%d ",ara[i]);

        }
    }

    return 0;
}


