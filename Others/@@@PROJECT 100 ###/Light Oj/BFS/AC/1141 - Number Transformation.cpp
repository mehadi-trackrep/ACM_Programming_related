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
#define forinZ_i(n)              for(int i=0; i<n; i++)			/// Z means zero
#define forinO_i(n)              for(int i=1; i<=n; i++)			/// O means one
#define forinZ_j(n)              for(int j=0; j<n; j++)			/// Z means zero
#define forinO_j(n)              for(int j=1; j<=n; j++)			/// O means one
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
#define SIZ     	10000

bool flag;

int s,t;
vector <int> vec[1005];

void prime_factors(int n)   ///AC
{
    int ind = n;
    int div = 2;
    int add = 0;

    while(n > 1){
        add = 0;
        while( n % div == 0 ){
            add = div;
            n /= div;
        }
        div += 1;
        if(add) vec[ind].push_back(add);
    }

    if(add == ind) vec[ind].clear();

}

int BFS(int src)
{
    if(s == t) return 0;        /// case 1

    int vis[1005] = {0};
    int level[1005];

    vis[src] = 1;
    level[src] = 0;

    queue <int> q;
    q.push(src);

    while(!q.empty())
    {
        int U = q.front(); q.pop(); //cerr << "................U: " << U << endl;

        for(int i=0; i<vec[U].size(); i++)
        {
            int V = vec[U][i] + U;
            //cerr << "V: " << V << endl;
            if(!vis[V] && V <= t)   /// case 2
            {
                vis[V] = 1;
                level[V] = level[U] + 1;
                if(V == t) return level[V];
                q.push(V);
            }
        }
    }

    return -1;
}

int main()
{
    int tc;
    cin >> tc;
    for(int i=2; i<=1000; i++) prime_factors(i);

    loop_tc(tc)
    {
        cin >> s >> t;
        int ans = BFS(s);
        pf("Case %d: %d\n",cas,ans);
    }
    return 0;
}

/*

4
3 3
3 4
4 3
8 9

5
8 6
12 622
9 935
16 797
69 981





*/
