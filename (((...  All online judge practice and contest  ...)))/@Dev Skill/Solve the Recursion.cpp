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

#define mx	1000000
#define mod	1000000007
#define INF	INT_MAX
#define mxn	1000

bool flag;

ll rec(ll n1,ll n2,ll n3)   ///AC
{
    ll val;

    if(n1 > n2 && n1 > n3)
    {
        val = n1 - max(n2,n3);
        return rec(n1-val,n2,n3);
    }
    else if(n2 > n1 && n2 > n3)
    {
        val = n2 - max(n1,n3);
        return rec(n1,n2-val,n3);
    }
    else if(n3 > n1 && n3 > n2)
    {
        val = n3 - max(n2,n1);
        return rec(n1,n2,n3-val);
    }
    else
        return (n1+n2+n3);
}

int main()
{
    ll n1,n2,n3;

    while(cin >> n1 >> n2 >> n3)
    {
        ll ans = rec(n1,n2,n3);

        printf("%lld\n",ans);
    }

	return 0;
}

/// save test cases

/***




***/
