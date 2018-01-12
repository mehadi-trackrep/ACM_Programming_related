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
#define pinf	    	2147483646		/// positive infinite
#define ninf	    	-2147483646	/// negative infinite
#define mxn	    	100    	/// node number
#define sz     	100005

#define lson rt<<1, l, mid
#define rson  rt<<1|1, mid+1, r
struct info
{
    ll bls,brs,s,bs;
}a[4*50005];

info ck;
int n;

info pushup(info l,info r)
{
    info res;
    res.s = l.s+r.s;
    res.bls = max(l.bls,l.s+r.bls);
    res.brs = max(r.brs,r.s+l.brs);
    res.bs = max(max(l.bs,r.bs),l.brs+r.bls);
    return res;
}

void build(int rt,int l,int r)
{
    if(l == r)
    {
        ll x;
        scanf("%lld",&x);
        a[rt].bls = a[rt].brs = a[rt].s = a[rt].bs = x;
        return ;
    }
    int mid = (l+r)>>1;
    build(lson);
    build(rson);
    a[rt] = pushup(a[rt<<1],a[rt<<1|1]);
}

info query(int rt,int l,int r,int L,int R)
{
    if(L>r || R<l) return ck;
    if(L<=l and r<=R)
    {
        ///cerr << "-=-=-=-> tree range: " << l << " " << r << endl;
        ///cerr << "-=-=-=-> update range: " << L << " " << R << endl;
        ///cerr << ".......> tree[rt].prop: " << tree[rt].prop << endl;
        return a[rt];
    }
    int mid = (l+r)>>1;
    info x = query(lson,L,R);
    info y = query(rson,L,R);
    info ret = pushup(x,y);
    return ret;
}

int main()
{
    scanf("%d",&n);
    build(1,1,n);
    ck.bls = ck.bs = ck.brs = ninf;
    ck.s = 0;
    int x,y,q;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d %d",&x,&y);
        info ret = query(1,1,n,x,y);
        ll ans = max(max(ret.brs,ret.bls),max(ret.bs,ret.s));
        printf("%lld\n",ans);
    }
}

/***

Input:
3
-1 2 3
1
1 2
Output:
2

6
5 2 -4 7 -1 10
5
1 6
3 6
2 5
3 5
3 4


***/
