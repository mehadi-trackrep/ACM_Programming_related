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
#define forinZ(n)             for(int i=0; i<n; i++)        /// 0 theke start , 'Z' means zero ..
#define forinO(n)             for(int i=1; i<=n; i++)       /// 1 theke start , 'O' means one ...
#define forde(n)              for(int i=n-1; i>=0; i--)
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
#define SIZ     	1000

bool flag;

struct info             ///AC
{
    int Ax,Ay,Bx,By;
}coordinate[SIZ+5];

int stick_x,stick_y;
int n;    /// stick number

/// collinear check ...
bool check_onsegment(int num,int ax,int ay) /// num er moddhe (ax,ay) point ace kina check ...
{
    if( (ax <= max(coordinate[num].Ax,coordinate[num].Bx)) && (ax >= min(coordinate[num].Ax,coordinate[num].Bx)) &&
        (ay <= max(coordinate[num].Ay,coordinate[num].By)) && (ay >= min(coordinate[num].Ay,coordinate[num].By)) ) return true;
    else return false;
}

int orientation(int num,int ax,int ay)  /// Let, dis == 0 collinear(0) , dis > 0 hole clockwise(1) and dis < 0 hole counter-clockwise(2)
{
    int dis =(coordinate[num].Ax-coordinate[num].Bx)*(coordinate[num].Ay-ay) - (coordinate[num].Ay-coordinate[num].By)*(coordinate[num].Ax-ax);
    if(dis == 0) return 0;
    return (dis > 0) ? 1:2;
}

int check_intersect(int num1,int num2)
{
    int o1 = orientation(num1,coordinate[num2].Ax,coordinate[num2].Ay);
    int o2 = orientation(num1,coordinate[num2].Bx,coordinate[num2].By);

    int o3 = orientation(num2,coordinate[num1].Ax,coordinate[num1].Ay);
    int o4 = orientation(num2,coordinate[num1].Bx,coordinate[num1].By);

    if(o1 != o2 && o3 != o4) return 1;

    /// special cases:
    if(o1 == 0 && check_onsegment(num1,coordinate[num2].Ax,coordinate[num2].Ay)) return 1;
    if(o2 == 0 && check_onsegment(num1,coordinate[num2].Bx,coordinate[num2].By)) return 1;

    if(o3 == 0 && check_onsegment(num2,coordinate[num1].Ax,coordinate[num1].Ay)) return 1;
    if(o4 == 0 && check_onsegment(num2,coordinate[num1].Bx,coordinate[num1].By)) return 1;

    /// else
    return 0;
}

int ck = 0;
int vis[SIZ];
vector <int> graph[SIZ];
int from,to;

void dfs(int src)
{
    vis[src] = 1;
    for(int i=0; i<graph[src].size(); i++)
    {
        int U = graph[src][i];
        if(!vis[U])
        {
            if(U == to)
            {
                ck = 1;
                return;
            }
            else dfs(U);
        }
    }
}

int main()
{
    int tc,q;
    cin >> tc;
    loop_tc(tc)
    {
        cin >> n >> q;

        forinO(n)
        {
            sf4(coordinate[i].Ax,coordinate[i].Ay,coordinate[i].Bx,coordinate[i].By);
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=i+1; j<=n; j++)
            {
                if(check_intersect(i,j))
                {
                    graph[i].pb(j);
                    graph[j].pb(i);
                }
            }
        }

        forinO(q)
        {
            cin >> from >> to;
            if(from == to)
            {
                printf("YES\n");
                continue;
            }
            memset(vis,0,sizeof(vis));
            ck = 0;
            dfs(from);
            if(ck) printf("YES\n");
            else printf("NO\n");
        }

        for(int i=1; i<=n; i++) graph[i].clear();
    }

    return 0;
}

/// save test cases

/*


*/


