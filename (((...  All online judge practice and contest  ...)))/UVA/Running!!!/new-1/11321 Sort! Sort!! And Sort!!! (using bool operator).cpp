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

struct data
{
    int a;
    int mod;
}ara[10005];

bool operator < (data p,data q)
{
    if(p.mod < q.mod) return 1;
    if(p.mod == q.mod)
    {
        if(odd(p.a) && even(q.a)) return 1;
        if(even(p.a) && even(q.a) && p.a < q.a) return 1;
        if(odd(p.a) && odd(q.a) && p.a > q.a) return 1;
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
            scanf("%d",&ara[i].a);
            ara[i].mod = (ara[i].a%M);
        }
        sort(ara,ara+N);

        for(int i=0; i<N; i++)
            printf("%d\n",ara[i].a);

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

