
/// i to j range er moddhe sob index update korar code ... ///
/// i to j range er moddhe sob index update korar code ... ///
/// i to j range er moddhe sob index update korar code ... ///
/// i to j range er moddhe sob index update korar code ... ///
/// i to j range er moddhe sob index update korar code ... ///  :-


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


//ll bigmod(ll base,ll pow,ll m){ll ret = 1;while(pow){if(pow&1) ret = (ret*base)%m;base = (base*base)%m;pow >>= 1;}return ret;}

//ll phi(ll k){ll ret = k;for(int i=2; i*i<=k; i++){if(k%i) continue;while(!(k%i)){k /= i;}ret -= ret/i;}if(k > 1) ret -= ret/k;return ret;}
//ll GCD(ll a,ll b){if(b == 0)return a; return GCD(b,a%b);}
//ll LCM(ll a,ll b) {return a*(b/GCD(a,b));}

int N;

struct info
{
    ll n_0,n_1,n_2,prop;
}tree[SIZ*3];

void build(int node, int b, int e)     /// i to j range er moddhe sum ber kora...
{
    if(b == e){
        tree[node].n_0 = 1;
        tree[node].n_1 = 0;
        tree[node].n_2 = 0;
        tree[node].prop = 0;
        return;
    }
    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node
    int mid = (b + e) >> 1;    /// 'b' means begin/start index and 'e' means end/finish index
    build(l, b, mid);
    build(r, mid + 1, e);
    tree[node].n_0 = tree[l].n_0 + tree[r].n_0;
    tree[node].n_1 = 0;
    tree[node].n_2 = 0;
    tree[node].prop = 0;
}

void update_lazy(int node)
{
    ll val = tree[node].n_2;
    tree[node].n_2 = tree[node].n_1;
    tree[node].n_1 = tree[node].n_0;
    tree[node].n_0 = val;
}

void update_childs_of_the_node(int node)
{
    int l = node << 1;
    int r = l + 1;
    ll freq = tree[node].prop%3;

    tree[l].prop = (tree[l].prop+tree[node].prop)%3;
    tree[r].prop = (tree[r].prop+tree[node].prop)%3;

    while(freq--)
    {
        update_lazy(l);
        update_lazy(r);
    }
    tree[node].prop = 0;
}

void update(int node, int b, int e, int i, int j)
{
    if (i > e || j < b)
        return ;     /// jehetu sob somoy small value er index search korteci .. so, ekhettere infinite value er index return korte hobe :)
    if (b >= i && e <= j){
        //cerr << "-->range- b and e: " << b << " " << e << endl;
        update_lazy(node);
        tree[node].prop = (tree[node].prop+1)%3;
        return;
    }
    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node
    int mid = (b + e) >> 1;
    if(tree[node].prop)
    {
        //cerr << "==>range- b and e: " << b << " " << e << endl;
        update_childs_of_the_node(node);    /// ekta node update korte hole , tar parents gular sob prop er summation lagbe .... :)
    }
    update(l,b,mid,i,j);
    update(r,mid+1,e,i,j);
    tree[node].n_0 = tree[l].n_0+tree[r].n_0;
    tree[node].n_1 = tree[l].n_1+tree[r].n_1;
    tree[node].n_2 = tree[l].n_2+tree[r].n_2;
}

ll query(int node, int b, int e, int i, int j)
{
    if (i > e || j < b) return 0;     /// jehetu sob somoy small value er index search korteci .. so, ekhettere infinite value er index return korte hobe :)
    if (b >= i && e <= j){
        //cerr << "-->range- b and e: " << b << " " << e << endl;
        return tree[node].n_0;
    }
    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node
    int mid = (b + e) >> 1;
    if(tree[node].prop)
    {
        //cerr << "==>range- b and e: " << b << " " << e << endl;
        update_childs_of_the_node(node);
    }
    ll p1 = query(l,b,mid,i,j);
    ll p2 = query(r,mid+1,e,i,j);
    return p1+p2;
}

//void display(int node,int b,int e)
//{
//    if(b == e){
//        tree[node].n_0 = 1;
//        tree[node].n_1 = 0;
//        tree[node].n_2 = 0;
//        tree[node].prop = 0;
//        return;
//    }
//
//    cerr << "-->node: " << node << endl;
//    cerr << "-->range- b and e: " << b << " " << e << endl;
//    cerr << "-->tree[node].n_0: " << tree[node].n_0 << endl;
//    cerr << "-->tree[node].prop: " << tree[node].prop << endl;
//
//    int l = node << 1;       /// l means left node
//    int r = l + 1;           /// r means right node
//
//    int mid = (b + e) >> 1;    /// 'b' means begin/start index and 'e' means end/finish index
//
//    display(l, b, mid);
//    display(r, mid + 1, e);
//}
//


int main()
{
    int tc,n,q;

    //cin >> tc;

   // loop_tc(tc)
    //{
        sf2(n,q);
        int p,i,j;
        build(1,1,n);
        while(q--)
        {
            sf3(p,i,j);
            i++;
            j++;
            if(p == 0) update(1,1,n,i,j);
            else
            {
                //display(1,1,n);
                pf("%lld\n",query(1,1,n,i,j));
            }
        }
    //}

    return 0;
}


/// save test cases ...
/***


4 7
1 0 3
0 1 2
0 1 3
1 0 0
0 0 3
1 3 3
1 0 3


***/

