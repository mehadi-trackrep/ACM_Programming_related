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
#include <tuple>

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
#define PINF	    	INT_MAX
#define pinf	    	2147483646.9		/// positive infinite
#define NINF	    	(-1)*INT_MAX
#define ninf	    	(-1)*2147483646.9	/// negative infinite
#define mxn	    	1000        		// node number
#define SIZ     	500000

bool flag;

vector <string> nam;
vector <tuple <ll,ll,ll> > vec;
string str;
ll l,w,h;

int main()      /// light oj te tuple use kora jabe na ... CE
{
    int tc,n;
    cin >> tc;

    loop_tc(tc)
    {
        cin >> n;
        fi(i,0,n-1)
        {
            cin >> str >> l >> w >> h;
            nam.pb(str);
            vec.pb(make_tuple(l,w,h));
        }

        ll volm1 = (get<0>(vec[0])) * (get<1>(vec[0])) * (get<2>(vec[0]));
        ll volm2 = (get<0>(vec[1])) * (get<1>(vec[1])) * (get<2>(vec[1]));

        if(n == 2)
        {
            if(volm1 == volm2) pf("Case %d: no thief\n",cas);
            else
            {
                if(volm1 > volm2)
                {
                    pf("Case %d: ",cas);
                    cout << nam[0] << " took chocolate from " << nam[1] << endl;
                }
                else
                {
                    pf("Case %d: ",cas);
                    cout << nam[1] << " took chocolate from " << nam[0] << endl;
                }
            }

            nam.clear();
            vec.clear();

            continue;
        }

        ll volm3 = (get<0>(vec[2])) * (get<1>(vec[2])) * (get<2>(vec[2]));

        ll volm;
        int took = -1,from = -1;        /// position / index

        if(volm1 == volm2 && volm1 == volm3 && volm2 == volm3) volm = volm1;
        else if(volm1 != volm2 && volm1 != volm3 && volm2 != volm3)
            volm = volm1+volm2+volm3 - ( max(max(volm1,volm2),volm3)+min(min(volm1,volm2),volm3) );
        else
        {
            if(volm1 == volm2 && volm3 > volm1)
            {
                volm = volm1;   /// standard volume
                took = 2;
            }
            if(volm1 == volm2 && volm3 < volm1)
            {
                volm = volm1;   /// standard volume
                from = 2;
            }
            ///
            if(volm1 == volm3 && volm2 > volm1)
            {
                volm = volm1;   /// standard volume
                took = 1;
            }
            if(volm1 == volm3 && volm2 < volm1)
            {
                volm = volm1;   /// standard volume
                from = 1;
            }
            ///
            if(volm3 == volm2 && volm1 > volm2)
            {
                volm = volm2;   /// standard volume
                took = 0;
            }
            if(volm3 == volm2 && volm1 < volm2)
            {
                volm = volm2;   /// standard volume
                from = 0;
            }
        }

        fi(i,3,n-1)
        {
            l = get<0>(vec[i]);
            w = get<1>(vec[i]);
            h = get<2>(vec[i]);

            if(l*w*h != volm)
            {
                if(took == -1) took = i;
                else if(from == -1) from = i;
                break;
            }
        }

        if(from == -1 && took == -1) pf("Case %d: no thief\n",cas);
        else
        {
            pf("Case %d: ",cas);
            cout << nam[took] << " took chocolate from " << nam[from] << endl;
        }

        nam.clear();
        vec.clear();
    }

    return 0;
}

/// save test cases

/*




*/



