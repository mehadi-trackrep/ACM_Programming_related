#include <stdio.h>
int main()
{
    int t,L,S,i,carriage[55],j;

    while(scanf("%d",&t) == 1){
        while(t >= 1){

            scanf("%d",&L);

            for(i = 0;i < L;i++)
                scanf("%d",&carriage[i]);

            S = 0;

            for(i = 0;i < L;i++){
                for(j  = i + 1;j < L;j++){
                    if(carriage[i] > carriage[j]){
                        carriage[i] = carriage[i]^carriage[j];
                        carriage[j] = carriage[i]^carriage[j];
                        carriage[i] = carriage[i]^carriage[j];
                        S++;
                    }
                }
            }

            printf("Optimal train swapping takes %d swaps.\n",S);

            t--;
        }
    }

    return 0;
}

