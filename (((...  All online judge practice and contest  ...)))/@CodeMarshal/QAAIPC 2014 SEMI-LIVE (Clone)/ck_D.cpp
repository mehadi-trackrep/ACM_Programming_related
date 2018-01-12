
#include <bits/stdc++.h>
using namespace std;

#define ll      long long

int main()
{
    int tc;

    ll q,p,d,a,s;

    scanf("%d",&tc);

    for(int cas = 1; cas<=tc; cas++)
    {
        scanf("%lld %lld %lld %lld %lld",&q,&p,&d,&a,&s);

        ll val = s - p*a;

        val *= (-1);

        ll i = p+d;

        if(val == 0) printf("Case %d:It may happen\n",cas);
        else if(i == 0 && s != 0) printf("Case %d:Review needed\n",cas);
        else if(i == 0 && s == 0) printf("Case %d:It may happen\n",cas);
        else if(!(val%i)) printf("Case %d:It may happen\n",cas);
        else printf("Case %d:Review needed\n",cas);

    }

	return 0;
}

/***
/// test cases





***/


