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
    cout<<e1<<endl;
}
template<class T1,class T2> void deb(T1 e1,T2 e2)	/// for 2 outputs
{
    cout<<e1<<" "<<e2<<endl;
}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)	/// for 3 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)		/// for 4 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)		/// for 5 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)		/// for 6 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
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

#define pf1(a)                scanf("%d\n", a)
#define pf2(a,b)              scanf("%d %d\n",a,b)
#define pf3(a,b,c)            scanf("%d %d %d\n", a, b, c)
#define pf4(a,b,c,d)          scanf("%d %d %d %d\n", a, b, c, d)
#define pf1ll(a)              scanf("%lld\n", a)
#define pf2ll(a,b)            scanf("%lld %lld\n", a, b)
#define pf3ll(a,b,c)          scanf("%lld %lld %lld\n", a, b, c)
#define pf4ll(a,b,c,d)        scanf("%lld %lld %lld %lld\n", a, b, c, d)
/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)	   	/// V.V.I.
#define fi(i,a,b)           for(int i=a; i<=b; i++)
#define fd(i,a,b)           for(int i=a; i>=b; i--)
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

/// mathematical short form ...
#define pi      	acos(-1.0)
#define ll      	long long
#define ull     	unsigned long long
#define mod	    	1000000007
#define PINF	    	2147483646.9
#define pinf	    	2147483646.9		/// positive infinite
#define NINF	    	(-1)*2147483646.9
#define ninf	    	(-1)*2147483646.9	/// negative infinite
#define mxn	    	2005    /// node number    		// node number
#define SIZ     	500000
#define MAX_N 100
#define MAX_W 1000

bool flag;
vector <int> graph[mxn];
char colour[mxn];
queue <int> q;
int B,C,N,E;
int visited[mxn] = {0};

int n;
int track_color[mxn][3];    /// ekta tree te koyti bull and koyti cow ace tar track ...
int dp[mxn][mxn];
int tree_count;     /// for greedy
int knapsack(int ind, int n_bull, int n_cow);
int check_Bicolouring(int SN,int tree_cnt);        /// prototype ...

int main()
{
    int tc;
    cin >> tc;

    loop_tc(tc)
    {
        sf3(B,C,E);

        fi(i,1,E)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        N = B+C; /// number_of_fields

        int ck;

        /// bi-coloring check ...

        tree_count = 0;
        memset(track_color,0,sizeof(track_color));
        memset(visited,0,sizeof(visited));

        fi(i,1,N)
        {
            if(!visited[i])
                ck = check_Bicolouring(i,tree_count++);
            if(!ck) break;
        }

        if(ck == 1){
            printf("no\n");
            fi(i,1,N) graph[i].clear();
            continue;
        }

        flag = false;
        ck = knapsack(1,0,0);   /// first set/tree theke check kora start ...
        if(ck) printf("yes\n");
        else pf("no\n");
        /// reset / clear ...

    }

    return 0;
}


int knapsack(int ind,int n_bull, int n_cow)        /// "bull" re '1' dara and "cow" re '2' dara indicate kore ...
{
    if(flag) return 1;
    if(ind == tree_count+1)
    {
        if(n_bull >= B and n_cow >= C)
        {
            flag = true;
            return 1;
        }
        else return 0;
    }
    if(dp[ind][n_cow] != -1) return dp[ind][n_cow];

    int ret1,ret2;
    ret1 = knapsack(ind+1,n_bull+track_color[ind][1],n_cow+track_color[ind][2]);
    ret2 = knapsack(ind+1,n_bull+track_color[ind][2],n_cow+track_color[ind][1]);

    return dp[ind][n_cow] = ret1 | ret2;
}


int check_Bicolouring(int SN,int tree_cnt)
{

    visited[SN] = 1;
    memset(colour,'W',sizeof(colour));
    colour[SN] = 'R';       /// 'R' means bull and 'B' means cow
    q.push(SN);

    track_color[tree_cnt][1]++;     /// '1' means bull and '2' means cow

    while(!q.empty()){
        int u = q.front();
        for(int i = 0;i < graph[u].size();i++){
            int v = graph[u][i];
            if(visited[v] == 1){
                if(colour[u] == colour[v] && colour[u] != 'W' && colour[v] != 'W') return 1;
            }
            else{
                visited[v] = 1;
                if(colour[u] == 'R')
                {
                    colour[v] = 'B';
                    track_color[tree_cnt][2]++;
                }
                if(colour[u] == 'B')
                {
                    colour[v] = 'R';
                    track_color[tree_cnt][1]++;
                }
                q.push(v);
            }
        }
        q.pop();
    }

    return 0;
}


/*


2
2 2 4
1 2
2 3
3 4
4 1
3 1 2
1 2
3 4

1
2 2 4
1 2
2 3
3 4
4 2

*/
