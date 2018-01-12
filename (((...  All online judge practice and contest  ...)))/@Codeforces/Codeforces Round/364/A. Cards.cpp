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
    int n;

    int ara[210];

    while(sf1(n) == 1)
    {
        int sum = 0;

        map <int,int> mp;

        int arr[210];

        for(int i=1; i<=n; i++)
        {
            sf1(ara[i]);
            sum += ara[i];

            mp[i] = ara[i];
            arr[ara[i]] = i;
        }

        int p = n/2;

        int val = sum/p;

        map <int,int> :: iterator it;

        int ck[210];

        memset(ck,0,sizeof(ck));

        for(it=mp.begin(); it!=mp.end(); it++)  ///AC
        {
            if(ck[it->first] != 0) continue;
            int a = it->second;
            int pos,b = val-a;
            //ck[it->first] = 1;
            for(int i=it->first+1; i<=n; i++)
            {
                if(ck[i] == 0 && ara[i] == b)
                {
                    ck[i] = 1;
                    pos = i;
                    break;
                }
            }
            //cerr << "a: " << a << " b: " << b << endl;
            printf("%d %d\n",it->first,pos);
        }
    }

	return 0;
}

/// save test cases

/*




*/
