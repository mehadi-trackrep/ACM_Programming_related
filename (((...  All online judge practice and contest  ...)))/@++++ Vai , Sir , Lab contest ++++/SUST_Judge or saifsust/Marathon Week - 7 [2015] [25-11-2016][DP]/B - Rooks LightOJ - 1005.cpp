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
#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c,d)        scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define pf1(a)                printf("%d\n", a)
#define pf2(a,b)              printf("%d %d\n",a,b)
#define pf3(a,b,c)            printf("%d %d %d\n", a,b,c)
#define pf4(a,b,c,d)          printf("%d %d %d %d\n",a,b,c,d)
#define pf1ll(a)              printf("%I64d\n",a)
#define pf2ll(a,b)            printf("%I64d %I64d\n",a,b)
#define pf3ll(a,b,c)          printf("%I64d %I64d %I64d\n",a,b,c)
#define pf4ll(a,b,c,d)        printf("%I64d %I64d %I64d %I64d\n",a,b,c,d)

/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)
#define fi(i,a,b)           for(int i=a; i<b; i++)
#define fd(i,a,b)           for(int i=a; i>b; i--)

/// mathematical short form ...
#define pi      	acos(-1.0)
#define ll      	long long
#define ull     	unsigned long long
#define mod	    	1000000007
#define pinf	    	2147483646		/// positive infinite
#define ninf	    	-12147483647	/// negative infinite
#define mxn	    	1000        		// node number
#define sz     	500000

//ll bigmod(ll base,ll pow,ll m){ll ret = 1;while(pow){if(pow&1) ret = (ret*base)%m;base = (base*base)%m;pow >>= 1;}return ret;}

//ll phi(ll k){ll ret = k;for(int i=2; i*i<=k; i++){if(k%i) continue;while(!(k%i)){k /= i;}ret -= ret/i;}if(k > 1) ret -= ret/k;return ret;}
//ll GCD(ll a,ll b){if(b == 0)return a; return GCD(b,a%b);}
//ll LCM(ll a,ll b) {return a*(b/GCD(a,b));}

ll dp[35][35][35];
int ck[35];
int n,k;

bool ok(int x,int y)
{
    fi(i,0,x)
    {
        if(ck[i] == y)
        {
            ///cerr << "--> " << x << " " << y << endl;
            return false;
        }
    }
    ///cerr << "==> " << x << " " << y << endl;
    return true;
}

ll rec(int row,int col,int num)
{
    if(num<0) return 0;
    if(row == n)
    {
        if(num == 0) return 1;
        else return 0;
    }
    if(dp[row][col][num] != -1) return dp[row][col][num];
    ll ret = 0;
    fi(i,0,n)
    {
        if(ok(row,i))
        {
            ck[row] = i;
            ret += rec(row+1,i,num-1);
            ck[row] = -1;
        }
    }
    ret += rec(row+1,col,num);
    return dp[row][col][num] = ret;
}

int main()      ///AC
{
	int tc;
	sf1(tc);
	loop_tc(tc)
	{
	    sf2(n,k);
	    mem(dp,-1);
	    mem(ck,-1);
	    ll ans;
	    if(k>n) ans = 0;
	    else ans = rec(0,0,k);
	    pf("Case %d: %lld\n",cas,ans);
	}
	return 0;
}

/***
/// test cases


9
3 3
1 1
2 1
3 1
4 1
4 2
4 3
4 4
4 5


***/

