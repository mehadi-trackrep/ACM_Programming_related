#define ONLINE_JUDGE 1
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
#define llu unsigned long long
#define inf 1000000000
#define pf printf
#define sf scanf
#define sq(x) ((x)*(x))
#define MAX 100009
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define memc(a,c) memset(a,'c',sizeof(a))
int X[] = {0, 0, 1, 0, 0, -1};
int Y[] = {0, 1, 0, 0, -1, 0};
int Z[] = {1, 0, 0, -1, 0, 0};
struct node{
    int x,y;
};

int main()
{
    ll i,j,k,l,x,y,z,t,m,n;
    cin>>t;
    for(i=1;i<=t;i++){
        sf("%lld",&x);
        y=2*x;
        y=sqrt(y);
        for(j=y-100;;j++){
            m=(j*j+j)/2;
            if(m==x && j>0){
                z=j;
                break;
            }
            if(m>x && j>0){
                z=j-1;
                break;
            }
        }
        pf("%lld\n",z);
        pf("%lld\n",x-((z*z+z)/2));
    }
    return 0;
}


