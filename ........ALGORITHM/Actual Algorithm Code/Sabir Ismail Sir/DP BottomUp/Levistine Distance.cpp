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

#define N 5000007

#define check cerr << "####=>"

string str1,str2;
int len1,len2;

//int M[len2][len1];

int M[100][100];

struct info
{
    char sign,first_char,second_char;
}lcs[100][100];

void init()
{
    for(int j=0; j<=len1; j++)   /// 0 row er all value 1-len1 kora ...
        M[0][j] = j;

    for(int j=0; j<=len2; j++)   /// 0 column er all value 1-len2 kora ...
        M[j][0] = j;
}

void find_levistine_distance()  /// problem ace ... :(
{
    for(int i=1; i<=len2; i++)  /// i means row ...
    {
        for(int j=1; j<=len1; j++)  /// j means columns...
        {

            if( M[i-1][j-1] <= (M[i][j-1]+1) && M[i-1][j-1] <= (M[i-1][j]+1) )
            {
                M[i][j] = M[i-1][j-1];
                lcs[i][j].sign = 'D';
                lcs[i][j].first_char = str1[j];
                lcs[i][j].second_char = str2[i];
            }
            else if( (M[i][j-1]+1) <= M[i-1][j-1] && (M[i][j-1]+1) <= (M[i-1][j]+1) )
            {
                M[i][j] = M[i][j-1]+1;
                lcs[i][j].sign = 'L';
                lcs[i][j].first_char = str1[j];
                lcs[i][j].second_char = str2[i];
            }
            else
            {
                M[i][j] = M[i-1][j]+1;
                lcs[i][j].sign = 'U';
                lcs[i][j].first_char = str1[j];
                lcs[i][j].second_char = str2[i];
            }
        }
    }
}

int main()
{
    cin >> str1 >> str2;

    len1 = str1.length();
    len2 = str2.length();

    init();

    find_levistine_distance();

    cerr << "and LEVISTINE DISTANCE: " << M[len2][len1] << endl;     /// len1 means number of columns and, len2 means number of rows ...

	return 0;
}

/// save test cases ...

/*

GUMBO
GAMBOL

SATURDAY
SUNDAY


*/


