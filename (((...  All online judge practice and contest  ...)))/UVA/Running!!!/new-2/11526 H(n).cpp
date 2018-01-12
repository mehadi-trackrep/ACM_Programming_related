#include <bits/stdc++.h>
using namespace std;
long long H(int n)
{
    long long res = 0;
    for( int i = 1; i <= n; i=i+1 )
    {
        res = (res + n/i);
    }
    return res;
}

int main()
{
    int t,n;
    long long res;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        res = H(n);
        printf("%lld\n",res);
    }
    return 0;
}
