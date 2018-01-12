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
template<class T1> void deb(T1 e1) {cerr<< "--> "<<e1<<endl;}
template<class T1,class T2> void deb(T1 e1,T2 e2) {cerr<< "--> "<<e1<<" "<<e2<<endl;}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3) {cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<endl;}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4) {cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5) {cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6) {cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;}

/// short form ...
#define ff	        first
#define ss	        second
#define pb	        push_back
#define sf              scanf
#define pf              printf
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
#define fi(i,a,b)           for(int i=a; i<b; i++)
#define fd(i,a,b)           for(int i=a; i>b; i--)
///
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);

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
#define SIZ     	10000010

#define lson rt << 1,l, mid
#define rson rt << 1 | 1,mid + 1, r

struct info
{
    int col,prop;
} tree[4*SIZ];

int ckcol[40005];

int m,n,q,ans;

void pushup(int rt)
{
    int l = 2*rt,r = l+1;
    if(tree[l].col == tree[r].col) tree[rt].col = tree[l].col;
    else tree[rt].col = 0;  /// means ei pura range a update hoy nay
//
//    cerr << ".......> rt.prop and sum: " << tree[rt].prop << " "<< tree[rt].sum << endl;
//    cerr << ".......> l.prop and sum: " << tree[l].prop << " "<< tree[l].sum << endl;
//    cerr << ".......> r.prop and sum: " << tree[r].prop << " "<< tree[r].sum << endl;
}

void pushdown(int rt)
{
    if(tree[rt].prop)
    {
        int l = 2*rt,r = l+1;
        tree[l].col = tree[r].col = tree[rt].col;
        tree[l].prop = tree[r].prop = 1;
        tree[rt].prop = 0;
    }
}

void build()
{
    mem(tree,0);
    mem(ckcol,0);
    ans = 0;
}

void update(int rt,int l,int r,int L,int R,int x) /// x is the ith update range
{
    if(L <= l && r <= R)
    {
        tree[rt].col = x;
        tree[rt].prop = 1;
        /// cerr << "-=-=-=-> tree range: " << l << " " << r << endl;
        /// cerr << "-=-=-=-> update range: " << L << " " << R << endl;
        /// cerr << ".......> tree[rt].prop: " << tree[rt].prop << endl;
        return;
    }
    int mid = (l + r) >> 1;
    pushdown(rt);
    if(L <= mid)
        update(lson,L,R,x);
    if(mid < R)
        update(rson,L,R,x);
//    cerr << "-=-=-=-> tree range: " << l << " " << r << endl;
//    cerr << "-=-=-=-> update range: " << L << " " << R << endl;
    pushup(rt);
}

void query(int rt,int l,int r)
{
    if(tree[rt].col)
    {
        if(!ckcol[tree[rt].col]) {ans++;ckcol[tree[rt].col] = 1;}
        return ;
    }
    int mid = (l + r) >> 1;
    if(l == r) return;
    pushdown(rt);
    query(lson);
    query(rson);
    pushup(rt);
}

int main()  ///AC
{
    int tc;
    sf1(tc);
    loop_tc(tc)
    {
        sf1(m);
        build();
        vector <pair<int,int> > vec;
        int x,y;
        n = 1;
        fi(i,0,m)
        {
            sf2(x,y);
            vec.push_back(make_pair(x,y));
            n = max(n,max(x,y));
        }
        //deb(n);
        fi(i,0,m)
        {
            x = vec[i].ff;
            y = vec[i].ss;
            update(1,1,n,x,y,i+1);
        }
        query(1,1,n);
        pf1(ans);
    }
}

/***
/// test cases


1
5
1 4
2 6
8 10
3 4
7 10


***/


