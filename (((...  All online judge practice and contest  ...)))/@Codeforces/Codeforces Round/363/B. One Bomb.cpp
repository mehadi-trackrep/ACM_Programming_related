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
    int r,c;

    while(cin >> r >> c)    ///AC
    {
        char ara[1000][1005];

        map <int,int> r1,c1;

        int cnt = 0;

        for(int i=0; i<r; i++)
        {
            for(int j=0; j<c; j++)
            {
                cin >> ara[i][j];
                if(ara[i][j] == '*')
                {
                    r1[i]++;
                    c1[j]++;
                    cnt++;
                }
            }
        }

        if(cnt == 0)
        {
            printf("YES\n");
            printf("%d %d\n",1,1);
            return 0;
        }

        map <int,int> :: iterator i,j;

        for(i = r1.begin(); i != r1.end(); i++)
        {
            for(j = c1.begin(); j != c1.end(); j++)
            {
                if(ara[i->first][j->first] == '*')
                {
                    if(i->second + j->second == cnt+1)
                    {
                        printf("YES\n");
                        printf("%d %d\n",i->first+1,j->first+1);
                        return 0;
                    }
                }
                else if(i->second + j->second == cnt)
                {
                    printf("YES\n");
                    printf("%d %d\n",i->first+1,j->first+1);
                    return 0;
                }
            }
        }

        printf("NO\n");
    }

	return 0;
}

/// save test cases

/*




*/
