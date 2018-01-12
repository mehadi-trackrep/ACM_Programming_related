#include <bits/stdc++.h>
using namespace std;

#define ll      long long

ll fact(ll n)
{
    if(n == 0 || n == 1)  return 1;
    return n*fact(n-1);
}

int main()
{
    ll n;
    while(scanf("%lld",&n) == 1)
    {
        ll ans = fact(n);
        printf("\t%lld er factorial: %lld\n",n,ans);
    }
    return 0;
}
