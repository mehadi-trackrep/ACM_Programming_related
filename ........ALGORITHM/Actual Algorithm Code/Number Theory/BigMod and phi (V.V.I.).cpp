#include <bits/stdc++.h>
using namespace std;

#define ll      long long
//#define mod     10000000007

/// 20847949 	2016-09-23 16:35:02 	koosaga 	718C - Sasha and Array 	GNU C++14 	Accepted 	1638 ms 	17300 KB

//ll mod;

ll bigmod(ll base,ll pow,ll mod)
{
    ll ret = 1;
    while(pow)
    {
        if(pow&1) ret = (ret*base)%mod;
        base = (base*base)%mod;
        pow >>= 1;
    }
    return ret;
}

ll phi(ll k)
{
    ll ret = k;
    for(int i=2; i*i<=k; i++)
    {
        if(k%i) continue;
        while(!(k%i))
        {
            k /= i;
        }
        ret -= ret/i;
    }
    if(k > 1) ret -= ret/k;
    return ret;
}

int main()
{
    #ifdef MMH
        freopen("calc.in", "r" , stdin);
        freopen("calc.out","w", stdout);
    #endif MMH


    ll n,k;
    scanf("%lld%lld",&n,&k);
    ll phi_k = phi(k);
    ll p = (bigmod(2,n,phi_k) + phi_k)%phi_k;
    if(p == 0) p = phi_k;
    ll ans = bigmod(2,p,k);
    ans = (ans+1)%k;
    printf("%lld\n",ans);
    return 0;
}

