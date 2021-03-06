/*
    BISMILLAH HIR RAHMANIR RAHIM .. "ALLAH IS ALMIGHTY" .

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       |      //       #
    #   //        //  //       //    //   /      \   //       /      //       #
    #   //        //  //////   //    //  /        \  ////////    /////////    #
    #                                                                         #
    ###########################################################################
                                                                              SUST
*/

//#include <bits/stdc++.h>

/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <tgmath.h>
#include <cstring>
/// Containers End


using namespace std;

/// debug , template er maddhome same name er function use kora jay for different task er jonno  ...
template<class T1> void deb(T1 e1)	/// for 1 output
{
    cerr<< "--> "<<e1<<endl;
}
template<class T1,class T2> void deb(T1 e1,T2 e2)	/// for 2 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<endl;
}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)	/// for 3 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)		/// for 4 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)		/// for 5 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)		/// for 6 outputs
{
    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
}


/// short form ...
#define ff	        first
#define ss	        second
#define pb	        push_back
#define sf              scanf
#define pf              printf
/// pair,map, ... short form ...
#define pii         pair<int,int>
#define psi         pair<string,int>
#define pis         pair<int,string>
#define mpis        map <int,string>
#define mpii        map <int,int>
#define mpsi        map <string,int>
/// Function short form ...
#define mem(a,x) memset(a,x,sizeof(a))
#define memc(a,c) memset(a,'c',sizeof(a))	/// char memset
#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c,d)          scanf("%d %d %d %d", &a, &b, &c, &d)
#define sf1ll(a)              scanf("%lld", &a)
#define sf2ll(a,b)            scanf("%lld %lld", &a, &b)
#define sf3ll(a,b,c)          scanf("%lld %lld %lld", &a, &b, &c)
#define sf4ll(a,b,c,d)        scanf("%lld %lld %lld %lld", &a, &b, &c, &d)

#define pf1(a)                printf("%d\n", a)
#define pf2(a,b)              printf("%d %d\n",a,b)
#define pf3(a,b,c)            printf("%d %d %d\n", a,b,c)
#define pf4(a,b,c,d)          printf("%d %d %d %d\n",a,b,c,d)
#define pf1ll(a)              printf("%lld\n",a)
#define pf2ll(a,b)            printf("%lld %lld\n",a,b)
#define pf3ll(a,b,c)          printf("%lld %lld %lld\n",a,b,c)
#define pf4ll(a,b,c,d)        printf("%lld %lld %lld %lld\n",a,b,c,d)
/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)	   	/// V.V.I.
#define fi(i,a,b)           for(int i=a; i<b; i++)
#define fd(i,a,b)           for(int i=a; i>b; i--)
///
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};	/*4 side move*/
//int dy[]= {-1,1,0,0};	/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

//ll bigmod(ll base,ll pow,ll m){ll ret = 1;while(pow){if(pow&1) ret = (ret*base)%m;base = (base*base)%m;pow >>= 1;}return ret;}

//ll phi(ll k){ll ret = k;for(int i=2; i*i<=k; i++){if(k%i) continue;while(!(k%i)){k /= i;}ret -= ret/i;}if(k > 1) ret -= ret/k;return ret;}
//ll GCD(ll a,ll b){if(b == 0)return a; return GCD(b,a%b);}
//ll LCM(ll a,ll b) {return a*(b/GCD(a,b));}

/*
int Set(int N,int pos){return N=N | (1<<pos);}
int Reset(int N,int pos){return N= N & ~(1<<pos);}
int check(int N,int pos){return (N & (1<<pos));}
int toggle(int N,int pos){if(check(N,pos))return N=Reset(N,pos);return N=Set(N,pos);}
void PBIT(int N){       printf("("); for(int i=10;i>=0;i--)     {bool x=check(N,i);cout<<x;}    puts(")");}
 */

/*** dp er sudu code
int rec(int src)
{
    if(dp[src] != -1) return dp[src];
    int ret = 0
    fi(i,0,graph[src].size())
    {
        int v = graph[src][i];
        //deb(v);
        ret |= !rec(v);
    }
    //deb(ret);
    return dp[src] = ret;
}
***/


/// mathematical short form ...
#define pi      	acos(-1.0)
#define ll      	long long
#define ull     	unsigned long long
#define mod	    	1000000007
#define pinf	    	2147483646		/// positive infinite
#define ninf	    	(-1)*2147483646	/// negative infinite
#define mxn	    	100    	/// node number
#define sz     	    100010

int dist[sz],par[sz],vis[sz];
vector <int> graph[sz],cost[sz];

struct data
{
    int x,w;
    data() {}
    data(int xx,int ww) {x = xx;w = ww;}
    bool operator < (const data &p)const
    {
        return w > p.w;
    }
};

int n,m;

void dijkstra(int src)
{
    for(int i=0; i<=n; i++) dist[i] = pinf;

    dist[src] = 0;
    par[src] = src;
    priority_queue <data> pq;

    pq.push(data(src,0));

    while(!pq.empty())
    {
        int u = pq.top().x;
        pq.pop();
        for(int i=0; i<graph[u].size(); i++)
        {
            int v = graph[u][i];
            //deb(v);
            if(!vis[v] and dist[u]+cost[u][i]<dist[v])
            {
                dist[v] = dist[u]+cost[u][i];       /// cost[u] er ith element tay v
                par[v] = u;
//                now.x = v;
//                now.w = dist[v];
                pq.push(data(v,dist[v]));
            }
        }
        vis[u] = 1;
    }
    //deb(-1,-1);
    //deb(dist[n]);
    return ;
}

int main()  ///AC
{
    while(sf2(n,m) == 2)
    {
        mem(vis,0);
        mem(par,0);
        //mem(cost,0);
        //mem(graph,0);
        fi(i,0,m)
        {
            int u,v,w;
            sf3(u,v,w);
            graph[u].pb(v);
            graph[v].pb(u);   /// for undirected graph
            cost[u].pb(w);
            cost[v].pb(w);
        }
        int src = 1;
        dijkstra(src);  /// where source node = 1

        int des = n;

        if(dist[des] == pinf) pf1(-1);//pf("Not possible\n");
        else
        {
            //cerr << "--=-=-> possible\n";
            //deb(des);
            vector <int> path;
            path.pb(des);
            while(des != src)
            {
                des = par[des];
                path.pb(des);
            }
            reverse(path.begin(),path.end());
            for(int i=0; i<path.size(); i++)
            {
                if(i == 0) pf("%d",path[i]);
                else pf(" %d",path[i]);
            }
            pf("\n");
            for(int i=0; i<=n; i++) {graph[i].clear();cost[i].clear();}
        }
    }
	return 0;
}

/***
/// test cases


3 1
1 2 1

5 6
1 2 2
2 5 5
2 3 4
1 4 1
4 3 3
3 5 1

3 1
1 2 1


***/
