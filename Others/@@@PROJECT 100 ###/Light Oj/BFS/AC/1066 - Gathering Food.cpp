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

#include <bits/stdc++.h>
using namespace std;


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
#define loop_tc(tc)            for(int cas=1; cas<=tc; cas++)	   	/// V.V.I.
#define forinZ_i(n)              for(int i=0; i<n; i++)			/// Z means zero
#define forinO_i(n)              for(int i=1; i<=n; i++)			/// O means one
#define forinZ_j(n)              for(int j=0; j<n; j++)			/// Z means zero
#define forinO_j(n)              for(int j=1; j<=n; j++)			/// O means one

int N;
char graph[12][12];

int cnt = 0;

int fx[4] = {0,-1,0,1};
int fy[4] = {-1,0,1,0};

int BFS(int sx,int sy,int pos)      ///AC
{
    int visited[12][12] = {0};
    int level[12][12];
    level[sx][sy] = 0;
    queue < pair<int,int> > q;
    int ck = 0;
    q.push(make_pair(sx,sy));
    pair<int,int> top;

    while(!q.empty()){
        top = q.front();
        q.pop();

        int ux = top.first;
        int uy = top.second;

        for(int i = 0;i < 4;i++){

            int vx = ux + fx[i];
            int vy = uy + fy[i];
            if(!visited[vx][vy] && vx >= 0 && vx < N && vy >= 0 && vy < N && graph[vx][vy] != '#' && ((graph[vx][vy]-'A') <= pos+1))
			{
			    visited[vx][vy] = 1;
                level[vx][vy] = level[ux][uy] + 1;
                if(graph[vx][vy]-'A' == pos+1)
                {
                    ck = 1;
                    return level[vx][vy];
                }
                q.push(make_pair(vx,vy));
			}
        }

        //cerr << "ck\n";
    }

    if(ck==0) return -1;
}

int main()
{
    int tc;

    cin >> tc;

    loop_tc(tc)
    {
        cin >> N;
        cnt = 0;
        map < int , pair<int,int> > mp;

        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                cin >> graph[i][j];
                if(graph[i][j] >='A' && graph[i][j] <= 'Z')
                {
                    cnt++;
                    mp[graph[i][j]-'A'] = (make_pair(i,j));
                }
            }
        }

        int total_level = 0;

        if(cnt <= 1)
        {
            printf("Case %d: 0\n",cas);
            continue;
        }
        int flag = 1;
        for(int i=0; i<=cnt-2; i++)
        {
            int a = mp[i].first, b = mp[i].second;
            int val = BFS(a,b,i);
            graph[a][b] = '.';
            if(val == -1) {
                flag=0;
                pf("Case %d: Impossible\n",cas);
                break;
            }
            else total_level+=val;
        }

        if(flag) pf("Case %d: %d\n",cas,total_level);
    }

    return 0;
}

/// save test cases

/*

14

3
A..
...
..B

10
A.........
..........
..........
..........
..........
..........
..........
..........
..........
.........B

4
.ID#
GA..
H#E.
FC.B


1
A

3
ABC
DEF
...

6
ABCDEF
GHIJKL
MNOPQR
STUVWX
YZ####
......

3
..A
.B.
C..

3
ABC
...
###

3
...
.A.
...

2
AC
DB

2
AC
BD

5
A....
####.
..B..
.####
C.DE.

2
A.
.B

2
A#
#B


*/

