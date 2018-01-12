#include <stdio.h>
int main()
{
    int t,n,wall[100],high,low,i,c = 1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        scanf("%d",&wall[0]);
        high = 0;
        low = 0;
        for(i = 1;i < n;i++){
            scanf("%d",&wall[i]);
            if(wall[i-1] < wall[i])
                high++;
            else if(wall[i-1] > wall[i])
                low++;
        }
        printf("Case %d: %d %d\n",c++,high,low);
    }
    return 0;
}
