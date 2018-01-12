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

int main()
{
    int tcas;

    string str;

    map <char,string> mp;

    mp['a'] = ".,.";
    mp['b'] = ".,..";
    mp['c'] = ".,...";
    mp['k'] = ".,...";
    mp['d'] = ".,....";
    mp['e'] = ".,.....";

    mp['f'] = "..,.";
    mp['g'] = "..,..";
    mp['h'] = "..,...";
    mp['i'] = "..,....";
    mp['j'] = "..,.....";

    mp['l'] = "...,.";
    mp['m'] = "...,..";
    mp['n'] = "...,...";
    mp['o'] = "...,....";
    mp['p'] = "...,.....";

    mp['q'] = "....,.";
    mp['r'] = "....,..";
    mp['s'] = "....,...";
    mp['t'] = "....,....";
    mp['u'] = "....,.....";

    mp['v'] = ".....,.";
    mp['w'] = ".....,..";
    mp['x'] = ".....,...";
    mp['y'] = ".....,....";
    mp['z'] = ".....,.....";

    sf1(tcas);

    for(int c=1; c<=tcas; c++)
    {
        cin >> str;
        int len = str.length();

        printf("Case %d: ",c);

        for(int i=0; i<len; i++)
        {
            if(i == 0)
            {
                string s = mp[str[0]];
                cout << s;
            }
            else
            {
                string s = mp[str[i]];
                cout << ' ' << s;
            }
        }
        if(c != tcas)
            cout << endl;
    }

	return 0;
}

/// save test cases

/*




*/
