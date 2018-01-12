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

    int ara[100005];

    sf1(n);

    for(int i=1; i<=n; i++)     ///AC
    {
        sf1(ara[i]);
    }
    ara[0] = 0;
    int cnt = 0,max_cnt = 0;

    for(int i=1; i<=n; i++)
    {
        if(ara[i] > ara[i-1]) cnt++;
        else
        {
            //cerr << "i: " << i << endl;
            if(cnt > max_cnt) max_cnt = cnt;
            cnt = 1;
        }
    }

    if(cnt > max_cnt) max_cnt = cnt;

	printf("%d\n",max_cnt);

	return 0;
}

/// save test cases

/*




*/
