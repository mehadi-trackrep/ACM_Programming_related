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
#define SIZ     	500000
#define Max 10000005 /// 1 koti means, maximum 1 koti porjonto prime generate korte pare


bool com[Max]; /// com means composite number array
ll prime[Max/10];
int p_cnt = 0; ///  p_cnt means prime number count

void markmultiples(int i){

    int j;

    for(j = i+i;j <= Max;j += i)    /// total koyta prime hoibo:- Formula: Max/(ln(Max)-1)
        com[j] = true;

}
void seive(){

    com[0] = true;
    com[1] = true;
    markmultiples(2);
    prime[p_cnt++] = 2;

    ll i;

    for(i = 3;i <= Max;i += 2){
        if(!com[i]){
            markmultiples(i);
            prime[p_cnt++] = i;
        }
    }

}

vector < pair<ll,int> > vec;

void prime_factorization(ll n)
{
    for(int i=0; prime[i]*prime[i]<=n; i++)
    {
        if(!(n%prime[i]))
        {
            int cnt = 0;
            while(!(n%prime[i]))
            {
                n /= prime[i];
                cnt++;
            }
            vec.push_back(make_pair(prime[i],cnt));
        }
    }

    if(n > 1) vec.push_back(make_pair(n,1));
}

int main()
{
    int tc;

    cin >> tc;

    seive();

    loop_tc(tc)
    {

        ll a,b,L;

        sf3ll(a,b,L);

        if(a == b and b == L) {printf("Case %d: %lld\n",cas,a);continue;}
        if(a == b and b != L) {printf("Case %d: %lld\n",cas,L);continue;}
        if(a != b and L == max(a,b)) {printf("Case %d: %lld\n",cas,L);continue;}

        vector < pair<ll,int> > va,vb,vL;

        prime_factorization(a);
        va = vec;
        vec.clear();

        prime_factorization(b);
        vb = vec;
        vec.clear();

        prime_factorization(L);
        vL = vec;
        vec.clear();

        //if(!(vL.size()>va.size() and vL.size()>vb.size())) {printf("Case %d: impossible\n",cas);continue;}

        double ans;
        int ck=0,aa=0,bb=0;

        for(int i=0; i<vL.size(); i++)
        {
            ll x,y,z;
            x = va[0].ff;
            y = vb[0].ff;
            z = vL[i].ff;

            if(z>x || z>y) {ck=1;break;}

            if(z == y and y == x)
            {

                if(vL[i].ss < max(va[0].ss,vb[0].ss)) {ck=1;break;}
                if(vL[i].ss > max(va[0].ss,vb[0].ss)) ans *= pow((double)z,(double)vL[i].ss);

                aa++;
                bb++;
                //cerr << "-->va[0].ff and vb[0].ff: " << va[0].ff << " " << vb[0].ff << endl;
//                va.pop_back();
//                vb.pop_back();
                //cerr << "==>va[0].ff and vb[0].ff: " << va[1].ff << " " << vb[1].ff << endl;
            }
            else if(z == y)
            {
                if(vL[i].ss < vb[0].ss) {ck=1;break;}
                //vb.pop_back();
                bb++;
            }
            else if(z == x)
            {
                if(vL[i].ss < va[0].ss) {ck=1;break;}
                //va.pop_back();
                aa++;
            }
            else
            {
                ans *= pow((double)z,(double)vL[i].ss);
            }
        }

        if(ck) printf("Case %d: impossible\n",cas);
        else printf("Case %d: %lld\n",cas,(ll)ans);
    }
    //printf("--> time = %.3lf",(double)clock()/CLOCKS_PER_SEC);

    return 0;
}

/***



4
2 4 1
6 15 15
2 4 6
2 4 12



***/
