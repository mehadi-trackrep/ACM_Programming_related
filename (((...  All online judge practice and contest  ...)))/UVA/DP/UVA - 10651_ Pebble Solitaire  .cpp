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
// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1};	/*4 side move*/
//int dy[]= {-1,1,0,0};	/*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

//ll bigmod(ll base,ll pow,ll m){ll ret = 1;while(pow){if(pow&1) ret = (ret*base)%m;base = (base*base)%m;pow >>= 1;}return ret;}
//ll phi(ll k){ll ret = k;for(int i=2; i*i<=k; i++){if(k%i) continue;while(!(k%i)){k /= i;}ret -= ret/i;}if(k > 1) ret -= ret/k;return ret;}
//ll GCD(ll a,ll b){if(b == 0)return a; return GCD(b,a%b);}
//ll LCM(ll a,ll b) {return a*(b/GCD(a,b));}

/// mathematical short form ...
#define pi      	acos(-1.0)
#define ll      	long long
#define ull     	unsigned long long
#define mod	    	1000000007
#define pinf	    	999999999		/// positive infinite
#define ninf	    	-2147483646	/// negative infinite
#define mxn	    	100    	/// node number
#define sz     	100005

int Set(int N,int pos) {return N = (N | (1<<pos));}
int Reset(int N,int pos) {return N = (N & ~(1<<pos));}
int Check(int N,int pos) {return (bool)(N&(1<<pos));}

int dp[1<<12 + 5];

int countSetBits(int n)
{
  int count = 0;
  while(n)
  {
    count += n & 1;
    n >>= 1;
  }
  //deb(count);
  return count;
}

int rec(int mask)
{
    if(dp[mask] != -1) return dp[mask];
    int ret = __builtin_popcount (mask); /// or, countSetBits(mask);
    ///deb(ret);
    for(int pos=0; pos<12; pos++)
    {
        if(pos<=9 and Check(mask,pos) and Check(mask,pos+1) and !Check(mask,pos+2))
        {
            int mask1 = mask;
            mask1 = Reset(mask1,pos);
            mask1 = Reset(mask1,pos+1);
            mask1 = Set(mask1,pos+2);
            ret = min(ret,rec(mask1));
        }
        if(pos>=2 and Check(mask,pos) and Check(mask,pos-1) and !Check(mask,pos-2))
        {
            int mask1 = mask;
            mask1 = Reset(mask1,pos);
            mask1 = Reset(mask1,pos-1);
            mask1 = Set(mask1,pos-2);
            ret = min(ret,rec(mask1));
        }
        //deb(pos);
    }
    //deb(mask);
    return dp[mask] = ret;
}

int main()  ///AC
{
    int n;
    sf1(n);
    loop_tc(n)
    {
        string s;
        cin >> s;
        int mask = 0;
        fi(i,0,12)
        {
            if(s[i] == 'o') mask = Set(mask,i);
        }
        mem(dp,-1);
        int ans = rec(mask);
        pf1(ans);
    }
	return 0;
}

/***
/// test cases


5
---oo-------
-o--o-oo----
-o----ooo---
oooooooooooo
oooooooooo-o


***/

