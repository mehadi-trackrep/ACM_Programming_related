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
#define fi(i,a,b)           for(int i=a; i<=b; i++)
#define fd(i,a,b)           for(int i=a; i>=b; i--)
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
#define PINF	    	2147483646.9
#define pinf	    	2147483646.9		/// positive infinite
#define NINF	    	(-1)*2147483646.9
#define ninf	    	(-1)*2147483646.9	/// negative infinite
#define mxn	    	100    /// node number    		// node number
#define SIZ     	1005

char graph[SIZ][SIZ],c;
bool visited[SIZ][SIZ];
int N,M,cnt;

void dfs(int sx, int sy)
{
    visited[sx][sy] = 1;
    if(sy == 0 and !visited[sx][N-1] and graph[sx][N-1] == c) {cnt++;dfs(sx,N-1);}
    for(int i=0; i<4; i++)
    {
        int ux = sx + dx[i];
        int uy = sy + dy[i];
        if(ux >= 0 && ux < N && uy >= 0 && uy < M && !visited[ux][uy] && graph[ux][uy] == c) {cnt++; dfs(ux,uy);}
    }
}

int main()
{
    while(cin >> N >> M)    ///AC
    {
        fi(i,0,N-1)
        fi(j,0,M-1)
        {
            cin >> graph[i][j];
        }
        int sx,sy;
        sf2(sx,sy);
        cnt = 1;
        c = graph[sx][sy];
        dfs(sx,sy);
        //deb(c);
        int mxcnt=0;
        fi(i,0,N-1)
        fi(j,0,M-1)
        {
            if(!visited[i][j] and graph[i][j] == c)
            {
                cnt = 1;
                dfs(i,j);
                mxcnt = max(mxcnt,cnt);
            }
        }
        pf1(mxcnt);
        mem(visited,false);
    }

    return 0;
}

/// save test cases

/*

5 5
wwwww
wwllw
wwwww
wllww
wwwww
1 3

5 5
wwwww
wwllw
wwwww
wllww
llwww
1 3


4 5
kklkk
klklk
klllk
kkkkk
1 2

1 1
h
0 0

6 6
aaaaaa
bbaaab
aaaabb
abaaba
abbaaa
abbabb
5 5

*/


