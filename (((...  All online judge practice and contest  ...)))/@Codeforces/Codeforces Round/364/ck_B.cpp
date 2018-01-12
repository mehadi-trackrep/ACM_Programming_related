#include<bits/stdc++.h>
using namespace std;
#define pf printf
#define sf scanf
#define pb push_back
#define mem(a) memset(a,0,sizeof(a))
#define ll long long
#define mx 100003
struct node{
    ll x, y;
};
bool a[1000003],b[1000003];
node ara[1000003];
int main()
{
    ll i,j,k,l,x,y,z,n,m;

    mem(a);
    mem(b);
    cin>>n>>m;
    for(i=1;i<=m;i++){
        sf("%I64d %I64d",&ara[i].x,&ara[i].y);
    }

    k=n*n;

    ll r=0,c=0;

    for(i=1;i<=m;i++){
        x=ara[i].x;
        y=ara[i].y;
        if(!a[x]){
            k=k-n+c;
            a[x]=1;
            r++;
        }
        if(!b[y]){
            k=k-n+r;
            c++;
            b[y]=1;
        }
        pf("%lld ",k);
    }
    return 0;
}
