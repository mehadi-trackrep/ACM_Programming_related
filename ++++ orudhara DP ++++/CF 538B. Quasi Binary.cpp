
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstring>
#include <cstdlib>
#include <numeric>
#include <utility>
#include <sstream>
#include <iomanip>
#include <iostream>
#include <algorithm>

using namespace std;

typedef long long Long;
typedef double DD;
typedef vector<int> VI;
typedef vector<VI > VVI;
typedef pair<int, int> PII;
typedef pair<Long, Long> PLL;
typedef vector<PII> VPII;
typedef vector<PLL> VPLL;

const int INF = 2000000000;
const int MOD = 1000000007;

#define sf scanf
#define pf printf
#define mem(a,b)          memset(a,b,sizeof(a))
#define pb push_back
#define REP(i,a,b)        for(int i=a; i<=b; ++i)
#define REPI(i,a,b,c)     for(int i=a; i<=b; i+=c)
#define REPR(i,a,b)       for(int i=b; i>=a; --i)
#define REPRD(i,a,b,c)    for(int i=b; i>=a; i-=c)
#define REPB(i,a)         for(int i=a; ;i++)
#define REPRB(i,a)        for(int i=a; ; i--)
#define mp(a,b)   make_pair(a,b)
#define fs        first
#define sc        second
#define SZ(s)     ((int)s.size())
#define PI        3.141592653589793
#define VS        vector<string>
#define VI        vector<int>
#define VD        vector<DD>
#define VL        vector<Long>
#define VVL       vector<VL >
#define lim       10000010
#define tlim      (1<<((int)ceil(log2(lim))+1))
#define unq(vec)  stable_sort(vec.begin(),vec.end());\
                  vec.resize(distance(vec.begin(),unique(vec.begin(),vec.end())));
#define BE(a)     a.begin(),a.end()
#define rev(a)    reverse(BE(a))
#define sorta(a)  stable_sort(BE(a))
#define sortc(a, comp)  sort(BE(a),comp)

//int X[]={1,1,2,2,-1,-1,-2,-2},Y[]={2,-2,1,-1,2,-2,1,-1};//knight move
//int X[]={0,-1,-1,-1,0,1,1,1},Y[]={-1,-1,0,1,1,1,0,-1};//8 move
//int X[]={-1,0,1,0},Y[]={0,1,0,-1};//4 move

VI quasi;
int DP[1000005];

bool OK(int i)
{
    while (i)
    {
        int rem = i % 10;
        if (rem != 0 && rem != 1)
            return false;
        i /= 10;
    }
    return true;
}
void pre_compute()
{
    for (int i = 1; i <= 1000000; ++i)
    {
        int val = i;
        if (OK(val))
            quasi.push_back(i);
    }
}

int REC(int n)
{
    if (n < 0)  return INF;
    if (n == 0) return 0;
    if(DP[n] != -1) return DP[n];
    int ret = INF;
    ret = INF;
    REP(i, 0, (SZ(quasi) - 1)) ret = min(ret, 1 + REC(n - quasi[i]));
    return DP[n] = ret;
}

void output(int n)
{
    if (n == 0)
        return;
    int ret = DP[n];
    REP(i, 0, (SZ(quasi) - 1))
    {
        if (ret == 1 + REC(n - quasi[i]))
        {
            cout << quasi[i] << " ";
            output(n - quasi[i]);
            return;
        }
    }
}

int main(int argc, const char **argv)   ///AC
{
    ios::sync_with_stdio(false);
    //double st=clock(),en;
    pre_compute();

    int n;
    while (cin >> n)
    {
        memset(DP, -1, sizeof(DP));

        cout << REC(n) << endl;
        output(n);
        cout << endl;
    }
    //en=clock();
    //cerr<<(double)(en-st)/CLOCKS_PER_SEC<<endl;
    return 0;
}

///*
//    BISMILLAH HIR RAHMANIR RAHIM .. "ALLAH IS ALMIGHTY" .
//
//    ###########################################################################
//    #                                                                         #
//    #   //        //  //////   //    //      /\      //////\\    /////////    #
//    #   // /    / //  //       //    //     /  \     //       \      //       #
//    #   //   /    //  /////    ////////    /////\    //       |      //       #
//    #   //        //  //       //    //   /      \   //       /      //       #
//    #   //        //  //////   //    //  /        \  ////////    /////////    #
//    #                                                                         #
//    ###########################################################################
//                                                                              SUST
//*/
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
///// debug , template er maddhome same name er function use kora jay for different task er jonno  ...
//
//template<class T1> void deb(T1 e1)	/// for 1 output
//{
//    cerr<< "--> "<<e1<<endl;
//}
//template<class T1,class T2> void deb(T1 e1,T2 e2)	/// for 2 outputs
//{
//    cerr<< "--> "<<e1<<" "<<e2<<endl;
//}
//template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)	/// for 3 outputs
//{
//    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<endl;
//}
//template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)		/// for 4 outputs
//{
//    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
//}
//template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)		/// for 5 outputs
//{
//    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
//}
//template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)		/// for 6 outputs
//{
//    cerr<< "--> "<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
//}
//// moves
//
////int dx[]= {-1,-1,0,0,1,1};
////int dy[]= {-1,0,-1,1,0,1};
////int dx[]= {0,0,1,-1};	/*4 side move*/
////int dy[]= {-1,1,0,0};	/*4 side move*/
////int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
////int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
////int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
////int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/
//
///// short form ...
//#define ff	        first
//#define ss	        second
//#define pb	        push_back
//#define sf              scanf
//#define pf              printf
///// pair,map, ... short form ...
//#define pii         pair<int,int>
//#define psi         pair<string,int>
//#define pis         pair<int,string>
//#define mpis        map <int,string>
//#define mpii        map <int,int>
//#define mpsi        map <string,int>
///// Function short form ...
//#define mem(a,x) memset(a,x,sizeof(a))
//#define memc(a,c) memset(a,'c',sizeof(a))	/// char memset
//#define sf1(a)                scanf("%d", &a)
//#define sf2(a,b)              scanf("%d %d",&a, &b)
//#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
//#define sf4(a,b,c,d)          scanf("%d %d %d %d", &a, &b, &c, &d)
//#define sf1ll(a)              scanf("%I64d", &a)
//#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
//#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
//#define sf4ll(a,b,c,d)        scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)
//
//#define pf1(a)                printf("%d\n", a)
//#define pf2(a,b)              printf("%d %d\n",a,b)
//#define pf3(a,b,c)            printf("%d %d %d\n", a,b,c)
//#define pf4(a,b,c,d)          printf("%d %d %d %d\n",a,b,c,d)
//#define pf1ll(a)              printf("%I64d\n",a)
//#define pf2ll(a,b)            printf("%I64d %I64d\n",a,b)
//#define pf3ll(a,b,c)          printf("%I64d %I64d %I64d\n",a,b,c)
//#define pf4ll(a,b,c,d)        printf("%I64d %I64d %I64d %I64d\n",a,b,c,d)
//
///// loop short form ...
//#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)
//#define fi(i,a,b)           for(int i=a; i<=b; i++)
//#define fd(i,a,b)           for(int i=a; i>=b; i--)
//
///// mathematical short form ...
//#define pi      	acos(-1.0)
//#define ll      	long long
//#define ull     	unsigned long long
//#define mod	    	1000000007
//#define PINF	    	9999999999
//#define pinf	    	9999999999		/// positive infinite
//#define NINF	    	(-1)*INT_MAX
//#define ninf	    	(-1)*2147483646.9	/// negative infinite
//#define mxn	    	1000        		// node number
//#define SIZ     	500000
//#define MOD         1000000007
//
////ll bigmod(ll base,ll pow,ll m){ll ret = 1;while(pow){if(pow&1) ret = (ret*base)%m;base = (base*base)%m;pow >>= 1;}return ret;}
//
////ll phi(ll k){ll ret = k;for(int i=2; i*i<=k; i++){if(k%i) continue;while(!(k%i)){k /= i;}ret -= ret/i;}if(k > 1) ret -= ret/k;return ret;}
////ll GCD(ll a,ll b){if(b == 0)return a; return GCD(b,a%b);}
////ll LCM(ll a,ll b) {return a*(b/GCD(a,b));}
//
//int n;
//vector <int> quasi;
//void generate_quasi(int x)
//{
//    if(x > 1000000) return ;
//    if(x <= 1000000 and (x&1)) quasi.push_back(x);
//    if(x != 0) generate_quasi(10*x);
//    generate_quasi(10*x+1);
//}
//
//int dp[1000005][100];
//
//int rec(int val,int pos,int cnt)
//{
//    if(val == n) return cnt;
//    if(val > n) return INT_MAX;
//    if(dp[val][pos] != -1) return dp[val][pos];
//    if(pos < quasi.size())
//        return dp[val][pos] = min(rec(val+quasi[pos],pos+1,cnt+1),rec(val,pos+1,cnt));
//    else return -1;
//}
//
//int main()
//{
//    generate_quasi(0);
//    sort(quasi.begin(),quasi.end());
//    //reverse(quasi.begin(),quasi.end());
//    while(sf1(n) == 1)
//    {
//        memset(dp,-1,sizeof(dp));
//        int ans = rec(0,0,0);
//        pf1(ans);
//    }
//    return 0;
//}
//
///***
///// test cases
//
//
//
//
//
//***/
//
