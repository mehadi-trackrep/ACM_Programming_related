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
//#include <cstring>  /// memset , cstring a define kora...!!!
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
#define PINF	    	INT_MAX
#define pinf	    	2147483646.9		/// positive infinite
#define NINF	    	(-1)*INT_MAX
#define ninf	    	(-1)*2147483646.9	/// negative infinite
#define mxn	    	1000        		// node number
#define SIZ     	105


vector <int> graph[SIZ];
int N,E;
int src,des;

int bfs(int SN,int DN)
{
    if(SN == DN) return 0;

    queue <int> q;

    int level[SIZ],visit[SIZ] = {0};

    level[SN] = 0;
    visit[SN] = 1;
    q.push(SN);

    while(!q.empty()){
        int u = q.front();
        q.pop();
        for(int i = 0;i < graph[u].size();i++){
            int v = graph[u][i];
            if(!visit[v]){
                visit[v] = 1;
                level[v] = level[u]+1;
                if(v == DN) return level[v];
                q.push(v);
            }
        }
    }
}


int main()          ///AC
{
    int tc;
    cin >> tc;

    loop_tc(tc)
    {
        cin >> N >> E;

        fi(i,1,E)
        {
            int x,y;
            cin >> x >> y;
            graph[x].push_back(y);
            graph[y].push_back(x);
        }

        cin >> src >> des;

        int max_level = 0;

        if(N == 1) pf("Case %d: 0\n",cas);
        else
        {
            fi(i,0,N-1)
            {
                int a,b;
                a = bfs(i,src);
                b = bfs(i,des);
                //cerr << "i,a,b: " << i << ' ' << a << ' ' << b << endl;
                max_level = max(max_level,(a+b));

            }
            pf("Case %d: %d\n",cas,max_level);
        }

        fi(i,0,N-1) graph[i].clear();
    }



    return 0;
}


/*

15

5
6
0 1
0 2
0 3
1 4
2 4
3 4
0 4

1
0
0 0
23
22
0 1
0 4
0 6
1 2
2 3
2 5
2 7
2 9
2 13
4 8
4 10
6 20
7 11
8 17
10 15
11 12
12 19
14 13
13 16
21 16
18 17
22 21
6 0

6
5
0 1
1 2
2 3
0 4
4 5
0 3

3
3
0 1
0 2
1 2
0 0
8
10
0 1
1 2
0 3
2 4
4 5
2 6
5 7
5 0
0 4
3 4
0 6
7
11
0 1
1 2
1 3
3 4
4 5
1 6
6 2
6 5
1 5
0 2
5 0
3 2

4
4
0 1
0 2
0 3
2 3
1 2
7
8
0 1
0 2
2 3
3 4
4 5
3 6
3 0
4 0
0 5
8
13
0 1
1 2
0 3
0 4
1 5
0 6
3 7
1 4
0 7
2 7
4 7
3 2
6 4
1 0

4
3
0 1
1 2
2 3
1 3
4
5
0 1
0 2
2 3
1 3
0 3
0 2

4
3
0 1
1 2
2 3
0 1
6
5
0 1
1 2
0 3
3 4
0 5
0 5
6
5
0 1
1 2
0 3
3 4
0 5
5 0




*/
