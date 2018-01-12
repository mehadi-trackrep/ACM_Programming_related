#include <stdio.h>
int main()
{
    int B,N,i,D,C,V;
    int reserve[30],ck;
    while(scanf("%d%d",&B,&N) && B != 0 && N != 0)
    {
        for(i = 1;i <= B;i++)
            scanf("%d",&reserve[i]);
        for(i = 0;i < N;i++){
            scanf("%d%d%d",&D,&C,&V);
            reserve[D] -= V;
            reserve[C] += V;
        }
        ck = 0;
        for(i = 1;i <= B;i++){
            if(reserve[i] < 0){
                ck = 1;
                break;
            }
        }
        if(ck == 1)
            printf("N\n");
        else
            printf("S\n");
    }
    return 0;
}
