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

#define mx	1000000
#define mod	1000000007
#define INF	2147483647
#define mxn	1000


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

int main()
{
    int n;

    ll ara[100005];             ///AC

    map <ll,ll> mp;

    sf1(n);

    for(int i=1; i<=n; i++)
    {
        sf1ll(ara[i]);
        mp[ara[i]]++;
    }

	ll cnt = 0;

	for(int i=1; i<=n; i++)
    {
        mp[ara[i]]--;    /// joto gula ara[i] value ace sob gular jonno , must mapped value first a ekta ekta kore decrease kora lagbo... e.g. 4 and 4 ace ...
        for(int j=0; j<=30; j++)        /// highest 9 digits dite pare , so ami highest 2^30 = 1073741824 dhorlam ...
        {
            ll x = (1<<j) - ara[i];
            if(mp[x] > 0) cnt += mp[x];
        }
    }

    printf("%I64d\n",cnt);

	return 0;
}

/// save test cases

/*



*/
