#include <stdio.h>
int main()
{
    int N,P,i;
    int multi = 1;
    while(scanf("%d%d",&N,&P)==2){
        if(N=P==0)
            break;
        for(i=1;i<=P;i++){
            multi = ( (multi % 100007) * (N % 100007) ) % 100007;
        }

        printf("%d\n",multi);

        multi = 1;
    }

    return 0;
}
