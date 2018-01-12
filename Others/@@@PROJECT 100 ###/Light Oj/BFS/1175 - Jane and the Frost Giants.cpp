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
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)	   	/// V.V.I.#define forinZ_i(n)              for(int i=0; i<n; i++)			/// Z means zero
#define forinO_i(n)              for(int i=1; i<=n; i++)			/// O means one
#define forinZ_j(n)              for(int j=0; j<n; j++)			/// Z means zero
#define forinO_j(n)              for(int j=1; j<=n; j++)			/// O means one
///
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
int dx[]= {0,0,1,-1};	/*4 side move*/
int dy[]= {-1,1,0,0};	/*4 side move*/
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
#define SIZ     	205

bool flag;

int N,M;
char graph[SIZ][SIZ];
vector < pair<int,int> >vec;

int level_J[SIZ][SIZ];
int level_F[SIZ][SIZ];

void bfs_F(int sx,int sy)            ///AC
{
    int visited[SIZ][SIZ] = {0};

    queue< pair<int,int> >q ;

    q.push(make_pair(sx,sy));

    level_F[sx][sy] = 0;
    visited[sx][sy] = 1;
    int cnt = 0;

    while(!q.empty())
    {
        pair <int,int> U = q.front(); q.pop();

        for(int i=0 ; i<4 ; i++)
        {
            int vx=U.first+dx[i];
            int vy=U.second+dy[i];

            if(vx >=1 && vx <=N && vy >=1 && vy <=N && !visited[vx][vy] && graph[vx][vy]!='#')
            {
                vec.pb(make_pair(vx,vy));
                visited[vx][vy] =  1 ;
                level_F[vx][vy] = level_F[U.first][U.second] + 1;
                q.push(make_pair(vx,vy)) ;
            }
        }
    }
}


int bfs_J(int sx,int sy)            ///AC
{
    int visited[SIZ][SIZ] = {0};

    queue< pair<int,int> >q ;

    q.push(make_pair(sx,sy));

    level_J[sx][sy] = 0;
    visited[sx][sy] = 1;
    int ck = 0;

    while(!q.empty())
    {
        pair <int,int> U = q.front(); q.pop();

        for(int i=0 ; i<4 ; i++)
        {
            int vx=U.first+dx[i];
            int vy=U.second+dy[i];

            if(vx >=1 && vx <=N && vy >=1 && vy <=N && !visited[vx][vy] && graph[vx][vy]!='#' && graph[vx][vy]!='F')
            {
                vec.pb(make_pair(vx,vy));
                visited[vx][vy] =  1 ;
                level_J[vx][vy] = level_J[U.first][U.second] + 1;
                if(vx == 1 || vx == N || vy == 1 || vy == N)
                {
                    if(level_J[vx][vy] < level_F[vx][vy])
                    {
                        cerr << "vx,vy: " << vx << ' ' << vy << " level_J[vx][vy]: " << level_J[vx][vy] << endl;
                        ck = 1;
                        return level_J[vx][vy];
                    }
                }
                q.push(make_pair(vx,vy)) ;
            }
        }
    }

    return -1;
}


int bfs(int sx,int sy)            ///AC
{
    int visited[SIZ][SIZ] = {0},level[SIZ][SIZ];

    queue< pair<int,int> >q ;

    q.push(make_pair(sx,sy));

    level[sx][sy] = 0;
    visited[sx][sy] = 1;
    int ck = 0;

    while(!q.empty())
    {
        pair <int,int> U = q.front(); q.pop();

        for(int i=0 ; i<4 ; i++)
        {
            int vx=U.first+dx[i];
            int vy=U.second+dy[i];

            if(vx >=1 && vx <=N && vy >=1 && vy <=N && !visited[vx][vy] && graph[vx][vy]!='#')
            {
                vec.pb(make_pair(vx,vy));
                visited[vx][vy] =  1 ;
                level[vx][vy] = level[U.first][U.second] + 1;
                if(vx == 1 || vx == N || vy == 1 || vy == N)
                {
                    cerr << "vx,vy: " << vx << ' ' << vy << " and level[vx][vy]: " << level[vx][vy] << endl;
                    ck = 1;
                    return level_J[vx][vy];
                }
                q.push(make_pair(vx,vy)) ;
            }
        }
    }

    return -1;
}

int main()
{

    int tc;

    cin >> tc;

    loop_tc(tc)
    {
        cin >> N >> M;

        int JX,JY,FX,FY;
        bool F = false; /// means fire nay ...

        forinO_i(N)
        forinO_j(M)
        {
            cin >> graph[i][j];
            if(graph[i][j] == 'J') {JX = i; JY = j;}
            if(graph[i][j] == 'F') {FX = i; FY = j;F=true;}
        }

        if(!F)
        {
            int ans = bfs(JX,JY);
            if(ans == -1) pf("Case %d: IMPOSSIBLE\n",cas);
            else pf("Case %d: %d\n",cas,ans+1);
            continue;
        }

        bfs_F(FX,FY);
        int ans = bfs_J(JX,JY);
        if(ans == -1) pf("Case %d: IMPOSSIBLE\n",cas);
        else pf("Case %d: %d\n",cas,ans+1);
    }

    return 0;
}

/*

2
4 5
##.##
#JF.#
#...#
#...#
3 3
###
#J.
#.F

*/

