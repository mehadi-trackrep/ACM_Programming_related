#include <stdio.h>
int main()
{
    int n,L,W,H,i,c = 1,total_area;

    while(1){

        scanf("%d",&n);

        for(i=0;i<=n;i++){
            scanf("%d%d%d",&L,&W,&H);
            total_area = L*W + L*H + H*W;
            printf("Case %d: %d",c++,total_area);
        }
    }
    return 0;
}
