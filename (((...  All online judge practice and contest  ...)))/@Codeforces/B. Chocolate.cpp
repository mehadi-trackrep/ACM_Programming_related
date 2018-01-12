/*
    BISMILLAH HIR RAHMANIR RAHIM

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       /      //       #
    #   //        //  //       //    //   /      \   //       /      //       #
    #   //        //  //////   //    //  /        \  ////////    /////////    #
    #                                                                         #
    ###########################################################################
                                                                              SUST
*/

#include <bits/stdc++.h>

using namespace std;

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

/// I/O Start
#define sf                    scanf
#define pf                    printf

#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)

#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
/// I/O End

#define mod	1000000007
#define INF	INT_MAX
#define mxn	1000
#define SIZ 500000
#define loop_tc(tc)     for(int cas=1; cas<=tc; cas++)	   /// V.V.I.

bool flag;

/// idea: serially first a 1 and tarpor onek gula zero paile totogula * porer 1 er jonno same vabe number of zero multiply korte korte jaite hobe ,
/// but input er last a joto gula zero ashbe , oder jonno kono combination not possible such as:
/*
input : 100010010000

type 1: 1 0001 0010000
type 1: 1 00010 010000
type 1: 1 000100 10000

type 2: 10 001 0010000
type 2: 10 0010 010000
type 2: 10 00100 10000

type 3: 100 01 0010000
type 3: 100 010 010000
type 3: 100 0100 10000

type 4: 1000 1 0010000
type 4: 1000 10 010000
type 4: 1000 100 10000

so , ans = 4*3;

if input is: 000100010010000 then output is also same (4*3): because first er zero gula theke 1 jukto group not possible so, a zero thaka r na thaka same ... :)

*/

int main()  /// again , sequence a only 1 ta one thakle , jeta first one ... ans = 1;
{
    ll n,x;

    while(cin >> n)
    {
        ll ans = 1,zero = 0,val,ck=0;   ///AC

        for(int i=1; i<=n; i++)
        {
            cin >> x;
            if(x)
            {
                val = ck*zero;
                if(ck == 1)
                    ans *= val;
                ck = 1;
                zero = 1;
            }
            else zero++;
        }

        if(!ck) ans = 0;

        cout << ans << endl;
    }

	return 0;
}

/// save test cases

/*

100
1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1 0 0 1



*/
