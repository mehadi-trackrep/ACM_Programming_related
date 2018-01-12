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

template<class T1> void deb(T1 e1)  /// for 1 output
{
    cout<<e1<<endl;
}
template<class T1,class T2> void deb(T1 e1,T2 e2)   /// for 2 outputs
{
    cout<<e1<<" "<<e2<<endl;
}
template<class T1,class T2,class T3> void deb(T1 e1,T2 e2,T3 e3)    /// for 3 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<endl;
}
template<class T1,class T2,class T3,class T4> void deb(T1 e1,T2 e2,T3 e3,T4 e4)     /// for 4 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<endl;
}
template<class T1,class T2,class T3,class T4,class T5> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5)      /// for 5 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<endl;
}
template<class T1,class T2,class T3,class T4,class T5,class T6> void deb(T1 e1,T2 e2,T3 e3,T4 e4,T5 e5,T6 e6)       /// for 6 outputs
{
    cout<<e1<<" "<<e2<<" "<<e3<<" "<<e4<<" "<<e5<<" "<<e6<<endl;
}

// moves

//int dx[]= {-1,-1,0,0,1,1};
//int dy[]= {-1,0,-1,1,0,1};
//int dx[]= {0,0,1,-1}; /*4 side move*/
//int dy[]= {-1,1,0,0}; /*4 side move*/
//int dx[]= {1,1,0,-1,-1,-1,0,1};/*8 side move*/
//int dy[]= {0,1,1,1,0,-1,-1,-1};/*8 side move*/
//int dx[]={1,1,2,2,-1,-1,-2,-2};/*night move*/
//int dy[]={2,-2,1,-1,2,-2,1,-1};/*night move*/

/// short form ...
#define ff          first
#define ss          second
#define pb          push_back
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
#define memc(a,c) memset(a,'c',sizeof(a))   /// char memset
#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c,d)          scanf("%d %d %d %d", &a, &b, &c, &d)
#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c,d)        scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)
/// loop short form ...
#define loop_tc(tc)           for(int cas=1; cas<=tc; cas++)       /// V.V.I.

///
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
/// mathematical short form ...
#define pi          acos(-1.0)
#define ll          long long
#define ull         unsigned long long
#define mod         1000000007
#define PINF            INT_MAX
#define pinf            2147483646.9        /// positive infinite
#define NINF            (-1)*INT_MAX
#define ninf            (-1)*2147483646.9   /// negative infinite
#define mxn         1000                // node number
#define SIZ         63245       ///V.V.I. sqrt(MOD)*2 , 2 multiple is for largeing size
#define MOD         1000000007

bool flag;

int vis[SIZ];
vector <ll> prime;

void prime_seive()
{
    prime.push_back(2);
    memset(vis,0,sizeof(vis));
    for(ll i=3; i<SIZ; i+=2)
    {
        if(!vis[i])
        {
            //cerr << "==> i: " << i << " ";
            prime.push_back(i);
            for(int j=i+i; j<SIZ; j+=i) vis[j] = 1;
        }
    }
}


ll bigmod(ll base, ll pow)
{
    ll ret = 1;
    while(pow)
    {
        if(pow&1) ret = (ret*base)%MOD;
        base = (base*base)%MOD;
        pow >>= 1;
    }
    return ret;
}

ll modular_inverse(ll base)
{
    ll ret = bigmod(base,MOD-2);    /// V.V.I. etate coto bigmod hoibo so , (bigmod(base,MOD-2)+MOD)%MOD deoar dorkar nay :)
    return ret;
}

ll SOD(ll prime_number,ll power)
{
    //cerr << "+++prime_number and power: " << prime_number << " " << power << endl;
    ll up,down;
    up = ((bigmod(prime_number,power)-1)+MOD)%MOD;  /// V.V.I. etate boro bigmod hoibo so , (bigmod(base,power)+MOD)%MOD deoa must dorkar :) such as: n = m = 2147483647
    down = modular_inverse(prime_number-1);
    //cerr << ".... up and down: " << up << " " << down << endl;
    //cerr << ".... (up*down)%MOD: " <<  (up*down)%MOD << endl;
    return (up*down)%MOD;
}

int main()          /// SOD = (p1^(a1+1)-1)/(p1-1) * (p2^(a2+1)-1)/(p2-1) * ...
{
    int tc;
    ll n,m;

    prime_seive();      ///AC

    cin >> tc;

    loop_tc(tc)
    {
        cin >> n >> m;

        ll ans = 1;

        ll x = n;//bigmod(n,m)%MOD;

        cerr << "-->x: " << x << endl;

        for(int i=0; prime[i]*prime[i] <= x; i++)
        {
            if(!(x%prime[i]))
            {
                int freq=0;
                while(!(x%prime[i]))
                {
                    //cerr << "--> prime[i]: " << prime[i] << endl;
                    freq++;
                    x /= prime[i];
                }
                //cerr << "==>prime[i] and frequency: " << prime[i] << " " << freq << endl;
                ans = (ans*SOD(prime[i],m*freq+1))%MOD;
                //cerr << "ANS: " << ans << endl;
            }
        }

        if(x > 1) /// ekhettere n nijeyi prime hoye jay ...
        {
            ans = (ans*SOD(x,m+1))%MOD;
            //cerr << "ANS: " << ans << endl;
        }

        printf("Case %d: %lld\n",cas,ans);
    }

    return 0;
}

/// save test cases

/*




*/
