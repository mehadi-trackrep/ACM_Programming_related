
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a,b,c,d;
    scanf("%lld%lld%lld",&a,&b,&c);
    if(a<b)swap(a,b);
    if(a<c)swap(a,c);

    d=0;
    a--;
    ll e=0;

    e=a-b;

    if(e>0)d+=e;
    e=a-c;

    if(e>0)d+=e;

      printf("%lld\n",d);

}
