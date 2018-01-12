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
#define inf                   2000000


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

#define Max 10000001;

int i,j,k,l,n,m,x,y,node,edge,weight;
int ara[100][100],next[100][100];
int from,to;
int tax[100];

void init()
{
    for(int i=0; i<100; i++)
    {
        for(int j=0; j<100; j++)
        {
            if(i==j)
            {
                ara[i][j]=0;
                continue;
            }
            ara[i][j]=inf;
        }
    }
}

void FW()
{
    for(int k=1; k<=5; k++)
    {
        for(int i=1; i<=5; i++)
        {
            for(int j=1; j<=5; j++)
            {
                if(ara[i][j] > ara[i][k]+ara[k][j]+tax[k])
                {
                    ara[i][j] = ara[i][k]+ara[k][j]+tax[k];
                    next[i][j] = next[i][k];
                    //cerr << "check: i and j " << i << ' ' << j << " path: b[j]: " << b[j] << endl;
                    //b[i][k]=i;
                    //b[k][j]=j;
                }
            }
        }
    }
}

void find_path(int from,int to)
{
    printf("From %d to %d :\nPath:",from,to);
    vector <int> path;
    int i = from;
    int j = to;
    while(i!=j)
    {
        i = next[i][j];
        path.push_back(i);
    }

    for(int i=0; i<path.size(); i++)
    {
        int n = path[i];
        cout << ' ' << n;
    }
    path.clear();
    cout << endl;

    return ;
}

void init();
void FW();
void find_path();

int main()
{
    int tcas;

    node = 5;

    cin >> tcas;

    while(tcas--)
    {
        init();

        for(int i=1; i<=5; i++)
        {
            for(int j=1; j<=5; j++){
                scanf("%d",&ara[i][j]);
                if(ara[i][j] == -1) ara[i][j] = inf;//INFINITY;
            }
        }

        for(int i=1; i<=5; i++) scanf("%d",&tax[i]);

        FW();

        while(cin>>from>>to)
        {
            find_path(from,to);

            printf("Total cost : %d\n",ara[from][to]);
        }
    }

	return 0;
}

/// save test cases ...

/*




*/
