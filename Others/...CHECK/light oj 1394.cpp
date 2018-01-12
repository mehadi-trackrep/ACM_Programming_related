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

string str;
int len;

void pali()
{
    if(len&1) /// means len is odd
    {
        int mid = len/2;
        if(str[mid]-'0' < 9)
        {
            str[mid] += 1;
            mid--;
            while(mid >= 0)
            {
                str[len-mid-1] = str[mid];
                mid--;
            }
        }
        else
        {
            //cerr << "check: " << endl;
            while(mid >= 0 && str[mid] == '9')
            {
                str[mid] = '0';
                str[len-mid-1] = str[mid];
                //cerr << "check: "  << str[mid] << endl;
                mid--;
            }
            if(mid == -1)
            {
                cerr << "check: mid->"  << mid << endl;
                string cpy;
                cpy[0] = '1';
                cpy[1] = '\0';
                cpy += str;
                cpy[len+2] = '\0';
                str = cpy;
                return ;
            }
            str[mid] += 1;
            str[len-mid+1] = str[mid];
            mid--;
            while(mid >= 0)
            {
                str[len-mid-1] = str[mid];
                mid--;
            }
        }
    }
    else /// if len is even...
    {

    }
}

int main()
{

    while(cin >> str)
    {
        len = str.length();
        pali();

        cout << str << endl;
    }

	return 0;
}

/// save test cases ...

/*




*/
