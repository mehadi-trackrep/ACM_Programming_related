#include <bits/stdc++.h>
using namespace std;
#define ll long long
int GCD(int a,int b)
{
    if(b == 0) return a;

    return GCD(b,a%b);
}

ll LCM(ll a,ll b)
{
    return a*(b/GCD(a,b));
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
    int a,b;

//    while(cin >> a >> b)
//    {
//        printf("GCD: %d\n",GCD(a,b));
//        printf("LCM: %lld\n",LCM(a,b));
//    }

    while(cin >> a)
    {
        printf("%lld\n",phi(a));
    }
}
