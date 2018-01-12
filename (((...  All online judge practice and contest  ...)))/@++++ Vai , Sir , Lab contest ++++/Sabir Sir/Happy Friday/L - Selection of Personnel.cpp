#include<bits/stdc++.h>
using namespace std;
#define  ll long long
int n;
ll C(int n,int m)
{
    if(n-m > m) m = n-m;
    ll ans=1ll;
    for(int i=1; i<=n-m; i++)
        ans=ans*(m+i)/i;
    return ans;
}
int main()
{
    while(scanf("%d",&n) == 1)
        printf("%I64d\n",C(n,5)+C(n,6)+C(n,7));
    return 0;
}

//ans=C(n,5)+C(n,6)+C(n,7)

/*

7
29

*/
