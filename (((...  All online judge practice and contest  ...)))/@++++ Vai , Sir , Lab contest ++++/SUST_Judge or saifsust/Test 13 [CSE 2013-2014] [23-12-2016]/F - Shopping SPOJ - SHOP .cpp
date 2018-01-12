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
template<class T1> void deb(T1 e1) {cerr<< "--> "<<e1<<endl;}
template<class T1,class T2> void deb(T1 e1,T2 e2) {cerr<< "--> "<<e1<<" "<<e2<<endl;}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3) {cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4) {cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5) {cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6) {cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;}

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
#define pinf	    	214748364		/// positive infinite
#define ninf	    	-2147483646	/// negative infinite
#define mxn	    	100    	/// node number
#define sz     	100005

int n,m;

char in[30][30];

int bfs(int sx,int sy)
{
    int cost[30][30];
    fi(i,0,n)
    fi(j,0,m) cost[i][j] = pinf;
    cost[sx][sy] = 0;
    int mincost = 25*25*10;
    queue <pair<int,int> > q;
    q.push(make_pair(sx,sy));
    while(!q.empty())
    {
        int ux = q.front().ff;
        int uy = q.front().ss;
        q.pop();
        fi(i,0,4)
        {
            int vx = ux + dx[i];
            int vy = uy + dy[i];
            if( vx>=0 and vx<n and vy>=0 and vy<m and in[vx][vy] != 'X' and cost[vx][vy] > (cost[ux][uy] + (in[vx][vy] - '0')) )
            {
                if(in[vx][vy] == 'D')
                {
                    mincost = min(mincost,cost[ux][uy]);
                    //deb(mincost,cost[ux][uy]);
                    continue;
                }
                //deb(cost[ux][uy],cost[vx][vy]);
                //deb(in[vx][vy]);
                cost[vx][vy] = cost[ux][uy] + (in[vx][vy] - '0');
                q.push(make_pair(vx,vy));
            }
        }
    }
    return mincost;
}

int main()
{
    while(sf2(m,n) and (n+m))
    {
        getchar();
        int sx,sy;
        fi(i,0,n)
        {
            fi(j,0,m)
            {
                sf("%c",&in[i][j]);
                if(in[i][j] == 'S') {sx=i;sy=j;}
            }
            //cerr << "--> " << in[i] << endl;
            if(i<n-1) getchar();
        }
        int ans = bfs(sx,sy);
        pf1(ans);
    }
	return 0;
}

/***
/// test cases


4 3
X1S3
42X4
X1D2

5 5
S5213
2X2X5
51248
4X4X2
1445D

0 0


***/

