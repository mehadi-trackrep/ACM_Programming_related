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

//ll bigmod(ll base,ll pow,ll mod){ll ret = 1;while(pow){if(pow&1) ret = (ret*base)%mod;base = (base*base)%mod;pow >>= 1;}return ret;}

//ll phi(ll k){ll ret = k;for(int i=2; i*i<=k; i++){if(k%i) continue;while(!(k%i)){k /= i;}ret -= ret/i;}if(k > 1) ret -= ret/k;return ret;}


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
#define SIZ     	1000005

struct data
{
    int a,b,diff,id;
    bool operator < (const data &p)const
    {
        return diff < p.diff;
    }
};

int tree[5*SIZ];
vector <data> vec;
int ck;

void update(int node, int b, int e, int i, int j, ll id)
{
    if (b > e or b>j or e<i)
        return;
    if (b >= i && j >= e) {
        //if(tree[node] == -1) tree[node] = id;
        tree[node] = id;
//        cerr << "\n............................\n";
//        deb(node);
//        deb(b,e);
//        deb(tree[node]);
//        cerr << "\n............................\n";
        return;
    }

    int l = 2*node;       /// l means left node
    int r = l + 1;           /// r means right node

    int mid = (b + e) >> 1;

    update(l, b, mid, i, j, id);
    update(r, mid + 1, e, i, j, id);

}

void query(int node, int b, int e, int x)
{
    if (b > x || e < x) return ;

    if (b == x && e == x){
        ck = tree[node];
        return ;
    }

    int l = 2*node;       /// l means left node
    int r = l + 1;           /// r means right node
    int mid = (b + e) >> 1;

    if(tree[l] == -1) tree[l] = tree[node]; /// for lazy propagation
    if(tree[r] == -1) tree[r] = tree[node]; /// for lazy propagation

    query(l, b, mid, x);
    query(r, mid + 1, e, x);
}


int main()
{
    int n,q;
    sf1(n);
    int mx = 0;
    int mn = pinf;
    memset(tree,-1,sizeof(tree));
    map <int,int> mp;
    fi(i,1,n)
    {
        data g;
        sf2(g.a,g.b);

        if(g.a < mn) mn = g.a;
        if(g.b > mx) mx = g.b;

        g.diff = g.b-g.a+1;
        g.id = i;
        vec.push_back(g);
    }
    sort(vec.begin(),vec.end());
    for(int i=vec.size()-1; i>=0; i--)
    {
        data g = vec[i];
        update(1,mn,mx,g.a,g.b,g.id);
        //cerr << "\n<==>\n";
    }

    sf1(q);
    fi(i,1,q)
    {
        int x;
        sf1(x);
        ck = -1;
        query(1,mn,mx,x);
        printf("%d\n",ck);
    }
	return 0;
}


/***
/// test cases


3
2 10
2 3
5 7
11
1
2
3
4
5
6
7
8
9
10
11



3
2 3
2 10        /// in valid input , only second segment tar ager segment er belong hote parbe ...
5 7
1
2


***/