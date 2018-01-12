#include <cstdio>
#include <cstring>
using namespace std;
#define ll long long
int main()
{
    ll t,n,m,i,j,k, a,b,c;
    scanf("%lld",&t);
    for(ll cs=1;cs<=t;cs++)
    {
        scanf("%lld",&n);
        a=n/3;
       ll s=0;
        for(i=1;i<a;i++)
        {
            c=n-i;
            if(c&1)b=c/2;
            else b=c/2-1;
            s+=(b-i);
        }
        printf("Case %lld: %lld\n",cs,s);
    }
}
