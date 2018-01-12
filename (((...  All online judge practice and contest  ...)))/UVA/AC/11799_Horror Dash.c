#include <stdio.h>
int main()
{
    int c[10000],t,n,i,max,cas = 1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        max = 0;
        for(i = 0;i < n;i++){
            scanf("%d",&c[i]);
            if(c[i] > max)
                max = c[i];
        }
        printf("Case %d: %d\n",cas++,max);
    }
    return 0;
}
