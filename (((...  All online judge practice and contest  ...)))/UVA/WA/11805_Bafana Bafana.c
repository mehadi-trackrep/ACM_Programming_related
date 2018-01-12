#include <stdio.h>
int main()
{
    int t,N,K,P,i,c = 1;

    scanf("%d",&t);

    while(t--){
        scanf("%d%d%d",&N,&K,&P);
        for(i = 1;i <= P;i++){
            if(K == N && i != P){
                K = 1;
                continue;
            }
            K++;
        }
    }
    return 0;
}
