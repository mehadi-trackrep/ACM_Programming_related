#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,x,i,j,c=1;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        x = n;
        j = 0;
        while(n >= 1){
            i = n % 10;
            j = j*10 + i;
            n /= 10;
        }
        if(x == j)
            printf("Case %lld: Yes\n",c++);
        else
            printf("Case %lld: No\n",c++);
    }
    return 0;
}

