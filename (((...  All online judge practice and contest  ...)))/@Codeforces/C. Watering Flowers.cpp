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

struct info
{
    int x,y;
}ara[2010];

int main()
{
    int n,x1,y1,x2,y2,a,b;

    while(cin >> n >> x1 >> y1 >> x2 >> y2)
    {
        vector <int> f1;
        vector <int> f2;

        f1.pb(0);
        f2.pb(0);

        while(n--)
        {
            cin >> a >> b;
            int val;
            val = (x1-a)*(x1-a) + (y1-b)*(y1-b);
            f1.pb(val);

            val = (x2-a)*(x2-a) + (y2-b)*(y2-b);
            f2.pb(val);
        }

        sort(f1.begin(),f1.end());
        sort(f2.begin(),f2.end());

        int r1,r2,Max = INT_MAX;

        for(int i=0,j=f2.size()-1; i<f1.size(); i++)
        {
            if(f1[i] + f2[j] < Max)
            {
                Max = f1[i] + f2[j];
                r1 = f1[i];
                r2 = f2[j];
            }
            cerr << "---> f1[i] and f2[j]: " << f1[i] << ' ' << f2[j] << endl;
        }

        printf("%d\n",Max);
    }
	return 0;
}

/// save test cases

/*




*/
