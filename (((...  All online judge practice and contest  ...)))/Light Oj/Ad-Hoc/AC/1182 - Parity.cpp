#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c = 1,count;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        count = 0;
        while(n >= 1){
            int x = n % 2;
            n /= 2;
            if(x == 1)
                count++;
        }
        if(count % 2 == 0)
            printf("Case %d: even\n",c++);
        else
            printf("Case %d: odd\n",c++);
    }
    return 0;
}
