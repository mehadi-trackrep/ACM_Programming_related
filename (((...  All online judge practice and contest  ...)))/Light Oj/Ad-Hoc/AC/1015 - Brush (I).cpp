#include <bits/stdc++.h>
using namespace std;
int ara[1010];
int main()
{
    int t,n,i,total = 0;
    int c = 1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        total = 0;
        for(i = 0;i < n;i++){
            scanf("%d",&ara[i]);
            if(ara[i] >= 0)
                total += ara[i];
        }
        printf("Case %d: %d\n",c++,total);
    }
    return 0;
}
