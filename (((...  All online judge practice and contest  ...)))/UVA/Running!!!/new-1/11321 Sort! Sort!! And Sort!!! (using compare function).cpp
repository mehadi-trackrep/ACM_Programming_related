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
#define Max 5000007

int N,M;
int ara[10005];

bool even(int x)
{
    if(x < 0) x*=(-1);
    if(x%2 == 0) return 1;
    else return 0;
}

bool odd(int x)
{
    if(x < 0) x*=(-1);
    if(x%2 != 0) return 1;
    else return 0;
}

int compare (int a, int b)
{
    int ma = (a%M);
    int mb = (b%M);

    if (ma < mb) return a < b;
    else if(mb > ma) return a < b;
    else if ( ma == mb )
    {
        if ( odd (ma) && even (mb) ) return a < b;
        else if ( odd (mb) && even (ma) ) return b < a;
        else if ( odd (ma) && odd (mb) && ma > mb ) return a > b;
        else if ( odd (ma) && odd (mb) && mb > ma ) return b > a;
        else if ( even (ma) && even (mb) && ma < mb ) return a < b;
        else if ( even (ma) && even (mb) && ma > mb ) return b < a;
    }
}

int main()
{
    while(1)
    {
        cin >> N >> M;
        if(N == 0 && M == 0)
        {
            printf("0 0\n");
            break;
        }
        for(int i=0; i<N; i++)
        {
            scanf("%d",&ara[i]);
        }
        sort(ara,ara+N,compare());

        for(int i=0; i<N; i++)
            printf("%d\n",ara[i]);

    }
	return 0;
}

/// save test cases ...

/*

15 3
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
0 0


*/


