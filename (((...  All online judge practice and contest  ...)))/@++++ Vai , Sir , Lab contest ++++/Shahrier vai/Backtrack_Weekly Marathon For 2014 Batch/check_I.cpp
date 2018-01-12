/*
     "BISMILLAH HIR RAHMANIR RAHIM"
     MD. MEHADI HASAN
     SHAHJALAL UNIVERSITY OF SCIENCE AND TECHNOLOGY
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
#define pi                    acos(-1.0)

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

#define debug(x) cout << "> " << #x << " = " << x << endl;
#define Max 10000001
#define mx 100

#define loop_tcas_in(tcas) for(int cas=1; cas<=tcas; cas++)
//#define loop_tcas_de(tcas) for(int cas=tcas; cas>=0; cas--)

#define for_in(a) for(int i=1; i<=a; i++)
#define for_de(a) for(int i=a; i>=0; i--)

int L;
int n;

int ara[mx];
int sum;
int total_sum;

vector <int> v,vout;

void back_track(int pos)            ///AC
{
    if(sum > total_sum){
        vout = v;
        total_sum = sum;
    }

    for(int i=pos; i<n; i++)
    {

        if(sum+ara[i] <= L)
        {
            v.push_back(ara[i]);

            sum += ara[i];

            back_track(i+1);

            sum -= ara[i];

            v.pop_back();
        }
    }

}

int main()
{
    while(sf2(L,n) == 2)
    {
        int ck_sum = 0;

        for(int i=0; i<n; i++)
        {
            scanf("%d",&ara[i]);
            //cerr << "--> " << ara[i] << endl;
            ck_sum += ara[i];
        }

        if(ck_sum <= L)
        {
            for(int i=0; i<n; i++)
            {
                printf("%d ",ara[i]);
            }
            printf("sum:%d\n",ck_sum);
        }
        else
        {
            total_sum = 0;
            sum = 0;

            back_track(0);

            for(int i=0; i<vout.size(); i++)
            {
                cout << vout[i] << ' ';
            }
            printf("sum:%d\n",total_sum);
        }

        v.clear();
        vout.clear();

    }

	return 0;
}

/// save test cases ...

/*

10 4 9 8 4 2
45 8 4 10 44 43 12 9 8 2

*/
