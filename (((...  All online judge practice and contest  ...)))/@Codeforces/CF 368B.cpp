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

// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};	/*4 side move*/
//int dy[]= {-1,1,0,0};	/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

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
#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c,d)        scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define pf1(a)                scanf("%d\n", a)
#define pf2(a,b)              scanf("%d %d\n",a,b)
#define pf3(a,b,c)            scanf("%d %d %d\n", a,b,c)
#define pf4(a,b,c,d)          scanf("%d %d %d %d\n",a,b,c,d)
#define pf1ll(a)              scanf("%I64d\n",a)
#define pf2ll(a,b)            scanf("%I64d %I64d\n",a,b)
#define pf3ll(a,b,c)          scanf("%I64d %I64d %I64d\n",a,b,c)
#define pf4ll(a,b,c,d)        scanf("%I64d %I64d %I64d %I64d\n",a,b,c,d)
/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)
#define fi(i,a,b)           for(int i=a; i<=b; i++)
#define fd(i,a,b)           for(int i=a; i>=b; i--)
///
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
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
#define SIZ     	500000

bool flag;

int ara[100005];
int ara1[100005];
vector <int> graph[100005];
map < pair<int,int> , int > mp;

int ck(int src)
{
    int val = 1000000009;

    for(int i=0; i<graph[src].size(); i++)
    {
        int u = graph[src][i];
        if(ara1[u] == -1) continue;
        int a = mp[make_pair(src,u)];
        if( a < val) val = a;
    }
    //cerr << "-->\n";
    return val;
}

int main()
{
	int n,m,k;
	while(cin >> n >> m >> k)
    {
        fi(i,1,m)
        {
            int u,v,w;
            cin >> u >> v >> w;

            if(mp[make_pair(u,v)]) mp[make_pair(u,v)] = min(mp[make_pair(u,v)],w);
            else mp[make_pair(u,v)] = w;

            if(mp[make_pair(v,u)]) mp[make_pair(v,u)] = min(mp[make_pair(v,u)],w);
            else mp[make_pair(v,u)] = w;

            graph[u].pb(v);
            graph[v].pb(u);
        }
        memset(ara1,0,sizeof(ara1));
        fi(i,1,k)
        {
            cin >> ara[i];
            ara1[ara[i]] = -1;
        }
        int mx = 1000000009;
        fi(i,1,k)
        {
            int val = ck(ara[i]);
            if(mx > val) mx = val;
        }

        if(mx == 1000000009) pf("-1\n");
        else pf("%d\n",mx);

        fi(i,1,n) graph[i].clear();
        mp.clear();
    }

    return 0;
}

/// save test cases

/*


5 4 2
1 2 5
1 2 3
2 3 4
1 4 10
1 5

3 1 1
1 2 3
3

2 3 1
1 2 3
1 2 18
1 2 13
2


6 5 2
1 2 2
1 5 1
5 1 1
4 1 2
3 6 3
5 1



*/

