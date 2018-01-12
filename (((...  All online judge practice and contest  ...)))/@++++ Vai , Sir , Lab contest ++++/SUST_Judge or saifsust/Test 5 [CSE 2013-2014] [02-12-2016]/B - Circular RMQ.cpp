
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
#define sf1ll(a)              scanf("%I64d", &a)

#define pf1(a)                printf("%d\n", a)
#define pf2(a,b)              printf("%d %d\n",a,b)
#define pf3(a,b,c)            printf("%d %d %d\n", a,b,c)
#define pf4(a,b,c,d)          printf("%d %d %d %d\n",a,b,c,d)
#define pf1ll(a)              printf("%I64d\n",a)
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
#define PINF	    	0x3fffffff
#define pinf	    	0x3fffffff		/// positive infinite
#define NINF	    	(-1)*2147483646.9
#define ninf	    	(-1)*2147483646.9	/// negative infinite
#define mxn	    	100    /// node number    		// node number
#define SIZ     	200005


//ll bigmod(ll base,ll pow,ll m){ll ret = 1;while(pow){if(pow&1) ret = (ret*base)%m;base = (base*base)%m;pow >>= 1;}return ret;}

//ll phi(ll k){ll ret = k;for(int i=2; i*i<=k; i++){if(k%i) continue;while(!(k%i)){k /= i;}ret -= ret/i;}if(k > 1) ret -= ret/k;return ret;}
//ll GCD(ll a,ll b){if(b == 0)return a; return GCD(b,a%b);}
//ll LCM(ll a,ll b) {return a*(b/GCD(a,b));}

int N;

struct info
{
    ll mn;
    ll prop;
}tree[SIZ*3];

ll ara[SIZ];

void build(int node, int b, int e)     /// i to j range er moddhe sum ber kora...
{
    if (b == e) {
        tree[node].mn = ara[b];
        tree[node].prop = 0;    /// initially 0
        return;
    }

    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node

    int mid = (b + e) >> 1;    /// 'b' means begin/start index and 'e' means end/finish index

    build(l, b, mid);
    build(r, mid + 1, e);

    tree[node].mn = min(tree[l].mn,tree[r].mn);
    tree[node].prop = 0;        /// initially sob segment er propagation 0
}

void update_lazy(int node)
{
    //cerr << "tree[node].prop : " << tree[node].prop << endl;
    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node
    tree[l].mn += tree[node].prop;
    tree[r].mn += tree[node].prop;
    tree[l].prop += tree[node].prop;
    tree[r].prop += tree[node].prop;
    tree[node].prop = 0;
}

void update(int node, int b, int e, int i, int j, ll x)
{
//    if (i > e || j < b)
//        return;
    if (b >= i && j >= e) {
        tree[node].mn += x;
        tree[node].prop += x;
        return;
    }

    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node

    int mid = (b + e) >> 1;

    if(tree[node].prop) update_lazy(node);

    if(i <= mid) update(l, b, mid, i, j, x);
	if(mid < j) update(r, mid + 1, e, i, j, x);

//    update(l, b, mid, i, j, x);
//    update(r, mid + 1, e, i, j, x);

    tree[node].mn = min(tree[l].mn,tree[r].mn);
}

ll query(int node, int b, int e, int i, int j)
{
//    if (i > e || j < b)
//        return pinf;

    if (b >= i && e <= j) return tree[node].mn;

    int l = node << 1;       /// l means left node
    int r = l + 1;           /// r means right node

    int mid = (b + e) >> 1;

    if(tree[node].prop) update_lazy(node);
    //cerr << ".........................................................\n";

    ll ret = pinf;
    if(i <= mid) ret = min(ret,query(l, b, mid, i, j));
	if(mid < j) ret = min(ret,query(r, mid + 1, e, i, j));

    return ret;
}



int main()  ///AC
{
    scanf("%d",&N);

    for(int i=1; i<=N; i++) scanf("%lld",&ara[i]);

    build(1,1,N);
    int l,r,q,val;
    sf1(q);
    while(q--)
    {
        sf2(l,r);
        l++;r++;
        if(getchar() == ' ')
        {
            sf1(val);
            //deb(val);
            if(l <= r) update(1,1,N,l,r,val);
            else {
                update(1,1,N,l,N,val);
                update(1,1,N,1,r,val);
            }
        }
        else
        {
            //cerr << "-=-=-=-=-=-\n";
            if(l <= r) pf1ll(query(1,1,N,l,r));
            else pf1ll(min(query(1,1,N,l,N),query(1,1,N,1,r)));
        }
    }


    //build(1,1,N);

    return 0;
}


/// save test cases ...
/***





***/

