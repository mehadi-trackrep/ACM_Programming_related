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

string f[100];

void rec(int n)
{
    if(f[n] != "") return;
    if(n == 0){
        f[0] += "a";
        return ;
    }
    else if(n == 1){
        f[1] += "b";
        return ;
    }
    else{
        rec(n-2);
        rec(n-1);
        f[n] = f[n-2] + f[n-1];
        return ;
    }
}

int main()
{
    int tc;
    int n,i;

    cin >> tc;

    for(int c=1; c<=tc; c++)
    {
        cin >> n >> i;
        rec(n);
        cerr << "f[n]: " << f[n] << endl;
        printf("Case %d: %c\n",c,f[n][i-1]);
    }

	return 0;
}

/// save test cases

/*




*/
