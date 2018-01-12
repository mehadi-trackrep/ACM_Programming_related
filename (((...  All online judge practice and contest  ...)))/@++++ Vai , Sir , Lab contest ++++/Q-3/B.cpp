/*
     BISMILLAH HIR RAHMANIR RAHIM
*/

/// Containers Start
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <utility>
#include <iomanip>
#include <sstream>
#include <bitset>
#include <cstdlib>
#include <iterator>
#include <algorithm>
/// C Header Files
#include <cstdio>
#include <cctype>
#include <cmath>
#include <math.h>
#include <ctime>
#include <tgmath.h>
#include <cstring>

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
    int tcas;
    scanf("%d",&tcas);
    for(int cas=1; cas<=tcas; cas++)    ///AC
    {
        int ara[101][101],a,ma,b,n,m,c,k,cn[101],cc;

        memset(cn,0,sizeof cn);

        scanf("%d%d",&n,&m);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        scanf("%d%d",&a,&b);

        for(int i=0; i<n; i++)
        {
            c=0;
            cc=0;
            ma=0;
            int j = 0;
            while(c<=b&&j<m)
            {
                if(ara[i][j]==0)c++;
                else cc++;
                j++;
            }
            ma=cc;
            c=0;
            cc=0;
            j=m-1;
            while(c<=b&&j>=0)
            {
                if(ara[i][j]==0)c++;
                else cc++;
                j--;
            }
            if(ma<cc)ma=cc;
            cn[i]=ma;
        }

        sort(cn,cn+n);

        reverse(cn,cn+n);

        int ans=0;

        for(int i=0; i<a; i++)
            ans+=cn[i];
        printf("Case %d: %d\n",cas,ans);
    }
}



/// save test cases

/*




*/
