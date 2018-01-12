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
/// Containers End


using namespace std;

/// Math Start
#define PI                    acos(-1.0)
#define Pi                    3.141592653589793
#define pi                    acos(-1.0)
#define SQR(n)                ( n * n )
/// Math End


/// Pair Start
#define ff                    first
#define ss                    second
#define mp                    make_pair
/// Pair End


/// Array Start
#define SET(a)                memset( a, -1,    sizeof a )
#define CLR(a)                memset( a,  0,    sizeof a )
#define MEM(a,val)            memset( a,  val,  sizeof(a) )
/// Array End


/// Extra Start
#define fixed                 setprecision
#define nn                    '\n'
#define pb                    push_back
#define SS                    stringstream
#define ull                   unsigned long long
#define mod                   1000000007
#define INF                   2147483647
#define SIZE                  2000001
#define MAX                   10000001;
#define _cin                  ios_base::sync_with_stdio(0);  cin.tie(0);
#define sz(a)                 int((a).size())
#define space                 " "
#define all(x)                (x).begin(), (x).end()
#define Ignore                cin.ignore()
#define StringToInt           if ( ! (istringstream(s) >> n) ) n = 0;
/// Extra End


/// TypeDef Start
typedef  long long int           ll;
typedef  map<string,int>         msi;
typedef  map<int,int>	         mii;
typedef  map<ll, ll>             mll;
typedef  map<char,int>           mci;
typedef  map<int,string>	     mis;
typedef  pair<int,int> 	         pii;
typedef  pair<string, int>       psi;
typedef  pair<string, string>    pss;
typedef  vector<int> 	         vi;
typedef  vector<string> 	     vs;
typedef  vector<char>	         vc;
typedef  vector<bool>            vb;
typedef  vector< pii >           vii;
/// TypeDef End


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

#define mx 5000007

#define check cerr << "####=>"

/// duita rekha intersect korce kina check ...


int check_position(int x1,int y1,int x2,int y2,int x,int y) /// -1 means CW and 1 means CCW , 0 means co-liner ...
{
    int val = (x2-x1)*(y-y1) - (x-x1)*(y2-y1);
    if(val < 0) return -1;
    else if(val > 0) return 1;
    else return 0;
}

int main()
{
    int ax,ay,bx,by,cx,cy,dx,dy;      /// CW means clockwise , CCW means counter clockwise ...

    scanf("%d%d%d%d%d%d%d%d",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy);

    int ck1,ck2,ck3,ck4;
    bool flag1,flag2;

    ck1 = check_position(ax,ay,bx,by,cx,cy);
    ck2 = check_position(ax,ay,bx,by,dx,dy);

    if(ck1 > 0 && ck2 < 0) flag1 = true;
    else if(ck1 < 0 && ck2 > 0) flag1 = true;

    ck3 = check_position(cx,cy,dx,dy,ax,ay);
    ck4 = check_position(cx,cy,dx,dy,bx,by);

    if(ck3 > 0 && ck4 < 0) flag2 = true;
    else if(ck3 < 0 && ck4 > 0) flag2 = true;

    //if(!(ck1+ck2+ck3+ck4)) printf("No intersecting point\n");
    if(flag1 && flag2)
    {
        int a1,b1,c1,a2,b2,c2;

        a1 = ay-by;
        b1 = ax-bx;
        c1 = ay*bx - by*ax;

        a2 = cy-dy;
        b2 = cx-dx;
        c2 = cy*dx - dy*cx;

        int X,Y;

        X = (b1*c2 - b2*c1)/(b1*a2 - b2*a1);
        Y = (a2*c1 - a1*c2)/(b1*a2 - b2*a1);

        printf("%d %d\n",X,Y);
    }
    else printf("No intersecting point\n");

    return 0;
}

/// save test cases ...

/*

2 0 20 0 16 2 24 -4
2 0 20 0 16 3 24 -4
2 0 20 0 16 4 24 -4
2 0 20 0 16 5 24 -4

*/
