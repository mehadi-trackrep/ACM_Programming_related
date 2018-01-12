#include<cstdio>
#include<algorithm>
#include<cstring>
#include<iostream>
#include<cmath>
#include<string>
#include<map>
#include<list>
#include<queue>
#include<utility>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<set>
#include<stack>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<iterator>
using namespace std;
#define ll long long
#define inf 1000000000
#define pf printf
#define sf scanf
#define pb push_back
#define mem(a) memset(a,0,sizeof(a))
/*int X[] = {0, 0, 1, 0, 0, -1};
int Y[] = {0, 1, 0, 0, -1, 0};
int Z[] = {1, 0, 0, -1, 0, 0};
struct node{
    ll x,y;
};*/

int main()
{
    ll i,j,k,l=0,x,y,z,n,m,t,ara[100004];
    map<ll,ll>mp;
    cin>>n;
    for(i=0;i<n;i++){
        sf("%I64d",&ara[i]);
        mp[ara[i]]++;
    }
    for(i=0;i<n;i++){
        mp[ara[i]]--;
        for(j=0;j<33;j++){
            x=(1<<j)-ara[i];
            if(mp[x]>0) l+=mp[x];
        }

    }
    pf("%I64d\n",l);
    return 0;
}
