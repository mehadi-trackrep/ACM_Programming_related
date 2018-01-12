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


#define PI                    acos(-1.0)
#define Pi                    3.141592653589793

#define SET(a)                memset( a, -1,    sizeof a )
#define CLR(a)                memset( a,  0,    sizeof a )
#define MEM(a,val)            memset( a,  val,  sizeof(a) )

#define ll                    long long
#define mod                   1000000007
#define INF                   2147483647


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

#define debug(x) cout << "> " << #x << " = " << x << endl;

#define Max 10000001;

int ara[100005];

int main()
{
	int n;

	map <int,int> mp;   ///AC

	queue <int> q;

	cin >> n;

	for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
        mp[ara[i]]++;
        if(mp[ara[i]] > 1 || ara[i] > n)
        {
            q.push(i);  /// position
        }
    }



    for(int x = 1; (!q.empty() && x <= n); x++)
    {
        if(mp[x] == 0)
        {
            ara[q.front()] = x;
            q.pop();
        }
    }

    for(int i=0; i<n; i++)
    {
        if(i == 0) printf("%d",ara[i]);
        else printf(" %d",ara[i]);
    }

    printf("\n");

	return 0;
}

/// save test cases ...

/*

8
8 8 8 9 9 9 8 7

4
2 2 3 3


*/
