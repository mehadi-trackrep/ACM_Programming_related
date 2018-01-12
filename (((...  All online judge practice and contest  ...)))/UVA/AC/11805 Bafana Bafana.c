#include <stdio.h>
int main()
{
    int t,N,K,P,c = 1;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&N,&K,&P);
        int ck = K+P;
        while(ck > N){
            ck -= N;
        }
        printf("Case %d: %d\n",c++,ck);
    }
    return 0;
}
