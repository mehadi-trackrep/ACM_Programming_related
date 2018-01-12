
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

#define SIZ     5000006

ull phi[SIZ];
//ll scores[SIZ];     /// ey array nile MLE dey ...

void sievephi(int n)
{
    memset(phi,0,sizeof(phi));

    phi[0] = 0;
    phi[1] = 1;

    for(int i=2; i<n; i++)
    {
        if(phi[i] == 0) /// means ekhono calculate kora hoy ni ...
        {
            for(int j=i; j<n; j+=i)
            {
                if(!phi[j]) phi[j] = j;
                phi[j] = (phi[j]/i)*(i-1);
            }
        }
    }
}

int main()
{
    int tcas,n;

    sievephi(SIZ);

    cin >> tcas;

    for(int c=1; c<=tcas; c++)
    {
        int a;

        sf1(a);

        printf("Case %d: %llu\n",c,phi[a]);
    }

    return 0;
}

/// save test cases

/*




*/



