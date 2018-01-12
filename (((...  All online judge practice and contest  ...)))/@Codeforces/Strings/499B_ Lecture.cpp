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
#define fi(i,a,b)           for(int i=a; i<=b; i++)
#define fd(i,a,b)           for(int i=a; i>=b; i--)
///
#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
/// mathematical short form ...
#define pi      	acos(-1.0)
#define ll      	long long
#define ull     	unsigned long long
#define mod	    	1000000007
#define PINF	    	9999999999
#define pinf	    	9999999999		/// positive infinite
#define NINF	    	(-1)*INT_MAX
#define ninf	    	(-1)*2147483646.9	/// negative infinite
#define mxn	    	1000        		// node number
#define SIZ     	500000

bool flag;

int main()  /// AC
{
    int n,m;

	while(cin >> n >> m)       ///AC
    {
        string a,b;
        map <string,string> mp;
        string ans = "";

        fi(i,1,m)
        {
            cin >> a >> b;
            mp[a] = b;
            mp[b] = a;
        }

        fi(i,0,n-1)
        {
            cin >> a;
            int l1 = a.size();
            int l2 = mp[a].size();

            if(l1 <= l2) ans += a;
            else if(l1 > l2) ans += mp[a];
            ans += " ";
        }

        cout << ans << endl;
    }

    return 0;
}

/// save test cases

/*




*/






