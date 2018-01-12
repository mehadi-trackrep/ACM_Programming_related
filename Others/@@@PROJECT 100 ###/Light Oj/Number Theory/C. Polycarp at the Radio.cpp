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
#define sq(x) ((x)*(x))
#define MAX 100009
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define memc(a,c) memset(a,'c',sizeof(a))
#define mod 100000007
/*int Set(int N,int pos){return N=N | (1<<pos);}
int reset(int N,int pos){return N= N & ~(1<<pos);}
bool check(int N,int pos){return (bool)(N & (1<<pos));}
int flip(int N,int pos){return N= N ^ (1<<pos);}
int Least_Significant_Bit(int N){return N= N & (-N);}*/
int X[] = {0, 0, 1, -1};
int Y[] = {-1, 1, 0, 0};
int Z[] = {1, 0, 0, -1, 0, 0};
struct node{
    int x,y;
    node(){}
    node(int x,int y):x(x),y(y){}
};

int main()
{
    ll i,j,k,l=0,m,n,x,t,y,z,a[2004],b[2004];
    mem(a,0);
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>b[i];
        if(b[i]>m){
            a[2001]++;
            b[i]=2001;
        }
        else{
            a[b[i]]++;
        }
    }
    pf("%lld ",n/m);
    x=n/m;
    y=n%m;
    z=1;
    for(i=0;i<n;i++){
        if(b[i]==2001 && a[2001]>0){
            while(z<=m){
                if(a[z]<x){
                    a[b[i]]--;
                    b[i]=z;
                    a[z]++;
                    l++;
                    break;
                }
                z++;
            }
        }
    }
    z=1;
    for(i=0;i<n;i++){
        if(b[i]==2001 && a[2001]>0){
            while(z<=m){
                if(a[z]<=x){
                    a[b[i]]--;
                    b[i]=z;
                    a[z]++;
                    l++;
                    break;
                }
                z++;
            }
        }
    }
    z=1;
    for(i=0;i<n;i++){
        if(a[b[i]]>x+1){
            while(z<=m){
                if(a[z]<x){
                    a[b[i]]--;
                    b[i]=z;
                    a[z]++;
                    l++;
                    break;
                }
                z++;
            }
        }
    }
    t=0;
    z=1;
    while(z<=m){
        if(a[z]<x){
            t=1;
            break;
        }
        z++;
    }
    z=1;
    if(t==1){
    for(i=0;i<n;i++){
        if(a[b[i]]>x){
            while(z<=m){
                if(a[z]<x){
                    a[b[i]]--;
                    b[i]=z;
                    a[z]++;
                    l++;
                    break;
                }
                z++;
            }

        }
    }
    }
    pf("%lld\n",l);
    for(i=0;i<n;i++) pf("%lld ",b[i]);
}



