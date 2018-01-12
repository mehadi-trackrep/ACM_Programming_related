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
#define mxn	    	100    /// node number    		// node number
#define SIZ     	5005

bool flag;
int N,E;
vector<int>graph[SIZ];
int n;
int max_level,node;
vector <int> lev[SIZ];

void bfs(int src)
{
    int u , i , v ;
    queue<int>q ;
    q.push(src);
    int visited[SIZ] = {0} , level[SIZ];
    visited[src] = 1 ;
    level[src] = 0 ;
    lev[0].push_back(src);
    max_level = 0;

    while(!q.empty())
    {
        u = q.front();
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i] ;

            if(!visited[v])
            {
                level[v] = level[u] + 1 ;
                visited[v] =  1 ;
                q.push(v) ;
                lev[level[v]].push_back(v);
                if(level[v] > max_level)
                {
                    node = v;
                    max_level = level[v];
                }
            }
        }
        q.pop();
    }

//    for(i=1; i<=n; i++)
//        printf("%d to %d distance %d and its parent: %d\n",src,i,level[i],parent[i]);
}

int main()
{
    int u;

    scanf("%d",&n);

    fi(i,1,n)
    {
        int p;
        cin >> p;
        fi(j,1,p)
        {
            cin >> u;
            graph[i].push_back(u);
            graph[u].push_back(i);
        }
    }

    bfs(1);

    fi(i,0,max_level) lev[i].clear();

    //cerr << "-->node: " << node << endl;
    bfs(node);

    if(max_level&1)
    {
        int val = max_level/2;

        printf("Best Roots  :");
        sort(lev[val].begin(),lev[val].end());
        fi(i,0,lev[val].size()-1) cout << " " << lev[val][i];
        ++val;
        sort(lev[val].begin(),lev[val].end());
        fi(i,0,lev[val].size()-1) cout << " " << lev[val][i];
        cout << endl;
        printf("Worst Roots :");

        sort(lev[val-2].begin(),lev[val-2].end());
        sort(lev[val+1].begin(),lev[val+1].end());

        fi(i,0,lev[val-2].size()-1) cout << " " << lev[val-2][i];
        fi(i,0,lev[val+1].size()-1) cout << " " << lev[val+1][i];

        cout << endl;
    }
    else
    {
        int val = max_level/2;

        printf("Best Roots  :");
        sort(lev[val].begin(),lev[val].end());
        fi(i,0,lev[val].size()-1) cout << " " << lev[val][i];
        cout << endl;
        printf("Worst Roots :");

        sort(lev[val-1].begin(),lev[val-1].end());
        sort(lev[val+1].begin(),lev[val+1].end());

        fi(i,0,lev[val-1].size()-1) cout << " " << lev[val-1][i];
        fi(i,0,lev[val+1].size()-1) cout << " " << lev[val+1][i];

        cout << endl;
    }

    return 0 ;
}

/*

7
2 2 3
3 1 6 7
3 1 4 5
1 3
1 3
1 2
1 2



5
3   4 2 5
1   1
1   4
2   1 3
1   1




*/

