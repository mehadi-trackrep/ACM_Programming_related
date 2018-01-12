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
#define SIZ     	200005

#define lson rt << 1,l, mid
#define rson rt << 1 | 1,mid + 1, r

struct info
{
    ll mn,sum,prop;
}tree[3*SIZ];

int n;

void pushup(int rt)
{
    ///tree[node].sum = tree[node << 1].sum + tree[node << 1 | 1].sum;
    tree[rt].mn = min(tree[rt << 1].mn, tree[rt << 1 | 1].mn);
}

void pushdown(int rt)
{
    if(tree[rt].prop)
    {
        tree[rt << 1].mn += tree[rt].prop;
        tree[rt << 1].prop += tree[rt].prop;
        tree[rt << 1 | 1].mn += tree[rt].prop;
        tree[rt << 1 | 1].prop += tree[rt].prop;
        tree[rt].prop = 0;
    }
}

void build(int rt,int l, int r)
{
    tree[rt].prop = 0;
    if(l == r)
    {
        sf1ll(tree[rt].mn);
        return;
    }
    int mid = (l + r) >> 1;

    build(lson);
    build(rson);

    pushup(rt);
}

void update(int rt,int l, int r,int L, int R, int x)
{
    if(L <= l && r <= R)
    {
        tree[rt].mn += x;
        tree[rt].prop += x;
        return;
    }
    int mid = (l + r) >> 1;
    pushdown(rt);
    if(L <= mid)
        update(lson,L,R,x);
    if(mid < R)
        update(rson,L,R,x);
    pushup(rt);
}

ll query(int rt,int l, int r,int L, int R)
{
    if(L <= l && r <= R)
        return tree[rt].mn;
    int mid = (l + r) >> 1;
    ll ans = pinf;
    pushdown(rt);
    if(L <= mid)
    {
        //cerr <<"/////////////////////////////////\n";
        ans = min(ans, query(lson,L,R));
    }
    if(mid < R)
        ans = min(ans, query(rson,L,R));
    return ans;
}

int main()  ///AC
{
    sf1(n);
    build(1,1,n);
    int q;
    sf1(q);
    while(q --)
    {
        int l, r, c;
        sf2(l,r);
        l ++;
        r ++;
        if(getchar() == ' ')
        {
            sf1(c);
            if(l <= r)
                update(1,1,n,l,r,c);
            else
            {
                update(1,1,n,1,r,c);
                update(1,1,n,l,n,c);
            }
        }
        else
        {
            if(l <= r)
                pf1ll(query(1,1,n,l,r));
            else
                pf1ll(min(query(1,1,n,1,r),query(1,1,n,l,n)));
        }
    }
}

/***
/// test cases





***/
