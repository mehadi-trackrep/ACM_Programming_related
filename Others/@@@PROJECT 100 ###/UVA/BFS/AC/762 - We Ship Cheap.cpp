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
#define forinZ(n)              for(int i=0; i<n; i++)			/// Z means zero
#define forinO(n)              for(int i=0; i<n; i++)			/// O means one
#define fordeZ(n)              for(int i=n-1; i>=0; i--)		/// Z means zero
#define fordeO(n)              for(int i=n; i>=1; i--)			/// O means one
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
#define SIZ     	100000

bool flag;

vector<int>graph[SIZ];
int n,parent[SIZ];

void bfs(int src,int des)
{
    int u , i , v ;
    queue<int>q ;
    q.push(src);
    int visited[SIZ] = {0};
    visited[src] = 1 ;

    while(!q.empty())
    {
        u = q.front();
        q.pop();
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i] ;

            if(!visited[v])
            {
                parent[v] = u;
                visited[v] =  1 ;
                q.push(v);
                if(v == des) return;
            }
        }
    }

}

int main()          ///AC
{
    int cc=1,E;

    while(cin >> E)
    {
        string str1,str2;

        map <string,int> mp;
        map <int,string> mp1;

        int x=1;

        while(E--)
        {
            cin >> str1 >> str2;
            if(mp[str1] == 0)
            {
                mp1[x] = str1;
                mp[str1] = x++;
            }
            if(mp[str2] == 0)
            {
                mp1[x] = str2;
                mp[str2] = x++;
            }
            graph[mp[str1]].pb(mp[str2]);
            graph[mp[str2]].pb(mp[str1]);
        }

        string src;
        string des;
        cin >> src >> des;

        memset(parent,0,sizeof(parent));

        bfs(mp[src],mp[des]);

        /// print ...

        vector <int> vec;
        int U = mp[des];
        vec.pb(U);

        while(parent[U])
        {
            U = parent[U];
            vec.pb(U);
        }

        if(cc > 1) cout << endl;        /// because , It will be a blank line between the output of two consecutive cases...

        if(vec.size() <= 1) printf("No route\n");
        else
        {
            for(int i=vec.size()-1; i>0; i--)
            {
                cout << mp1[vec[i]] << ' ' << mp1[vec[i-1]] << endl;
            }
        }

        for(int i=1; i<=x; i++) graph[i].clear();

        cc++;
    }

    return 0;
}


/// save test cases

/*

3
JV PT
KA PT
KA HP
JV HP
2
JV PT
KA HP
JV HP


*/
