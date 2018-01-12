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

int ara1[100005];

int main()
{
    int n;
    int ara[100005];

    while(cin >> n)
    {
        map <int,int> mp;
        map <int,int> mp1;  /// for index

        for(int i=0; i<n; i++)
        {
            sf1(ara[i]);
            if(mp[ara[i]] == 0)
            {
                mp1[ara[i]] = i;
                cerr << "==> ara[i] and i: " << ara[i] << ' ' << i << endl;
            }
            mp[ara[i]]++;
            ara1[i] = ara[i];
        }

        map <int,int> :: iterator it;

        sort(ara1,ara1+n);

        for(int i=0; i<n; i++)
        {
            int x = ara[i];
            int ind = mp1[x]-1; /// index

            cerr << "--> x: " << x << " and ind: " << ind << " ara[ind]: " << ara[ind] << endl;

            if(x < 2)
            {
                if(i&1) printf("1\n");
                else printf("2\n");
                continue;
            }

            int ck=0;

            for(int j=ara[ind]; j>=0; j--)
            {
                if(mp[j] > 0 && mp[x-j] > 0)
                {
                    int a = x-j;
                    if(j == a)
                    {
                        if(mp[j] > 1)
                        {
                            ck = 1;
                            //cerr << "+++ val: " << x << endl;
                            break;
                        }
                    }
                    else
                    {
                        ck = 1;
                        //cerr << "+++ val: " << x << endl;
                        break;
                    }
                }
            }

            if(i&1)
            {
                if(ck == 1) printf("2\n");
                else printf("1\n");
            }
            else
            {
                if(ck == 1) printf("1\n");
                else printf("2\n");
            }
        }
    }

	return 0;
}

/// save test cases

/*




*/
