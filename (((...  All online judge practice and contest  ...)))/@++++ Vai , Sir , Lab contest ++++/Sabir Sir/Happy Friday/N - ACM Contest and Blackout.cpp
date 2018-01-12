
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
/// loop short form ...
#define loop_tc(tc)           for(int cas=1; cas<=tc; cas++)	   /// V.V.I.
#define forin(n)              for(int i=0; i<n; i++)
#define forde(n)              for(int i=n-1; i>=0; i--)
///
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
/// mathematical short form ...
#define pi      	acos(-1.0)
#define ll      	long long
#define ull     	unsigned long long
#define mod	    	1000000007
#define mxn	    	1005        		// node number

int par[mxn];
int first,E;
int node;

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const
    {
        return (w < p.w); /// jetar upor basis kore sort hobe.../ means small weight(w) gula first a rakhbe...
    }
};

vector <edge> graph;
vector <int> tree1;

void makeset()
{
    for(int i=0; i<=node; i++)       /// mxn  means maximum node number ...
        par[i] = i;
}

int find_set(int r)
{
    if(r == par[r])
        return r;
    return par[r] = find_set(par[r]);
}

int MST_krushkall(int flag_edge)
{
    //sort(graph.begin(),graph.end());  /// bar bar sort korle WA dey ...

    makeset();      /// eta V.V.I. er size i=0 theke i <= node dile hobe ...

    int cnt = 0,cost = 0;

    for(int i=0; i<graph.size(); i++)
    {
        int u,v,w;
        u = graph[i].u;
        v = graph[i].v;
        w = graph[i].w;

        if(i == flag_edge) continue;

        int x,y;
        x = find_set(u);
        y = find_set(v);

        if(x != y){
            cnt++;
            cost += w;
            if(first) tree1.push_back(i);
            par[x] = y;
            if(cnt == node-1) return cost;
        }
    }

    return -1;
}

void reset()
{
    graph.clear();
    tree1.clear();
}

int main()      ///AC
{
    int tc;
    cin >> tc;

    while(tc--)
    {
        scanf("%d%d",&node,&E);

        for(int i=1; i<=E; i++)
        {
            int u,v,w;
            scanf("%d%d%d",&u,&v,&w);
            edge get;
            get.u = u;
            get.v = v;
            get.w = w;
            graph.push_back(get);
        }

        sort(graph.begin(),graph.end());    /// V.V.I. for 1 bar sort kora ...

        first = 1;

        int mst1 = MST_krushkall(-1);
        int mst2 = INT_MAX;

        first = 0;

        for(int i=0; i<tree1.size(); i++)
        {
            int val = MST_krushkall(tree1[i]);
            if(val == -1) continue;
            if(val < mst2) mst2 = val;
        }

        printf("%d %d\n",mst1,mst2);

        reset();
    }

    return 0;
}

/// save test cases

/*

2
5 8
1 3 75
3 4 51
2 4 19
3 2 95
2 5 42
5 4 31
1 2 9
3 5 66
9 14
1 2 4
1 8 8
2 8 11
3 2 8
8 9 7
8 7 1
7 9 6
9 3 2
3 4 7
3 6 4
7 6 2
4 6 14
4 5 9
5 6 10


*/

