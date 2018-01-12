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
using namespace std;            ///AC
#define N 5000007

int main()
{
    int M[20000];
    int vis[20000];

    int n,m;

    while(cin >> n >> m)
    {
        if(n == 0 && m == 0) break;

        memset(M,0,sizeof(M));
        memset(vis,0,sizeof(vis));

        int x;
        int cnt = 0;
        for(int i=1; i<=m; i++)
        {
            cin >> x;
            M[x]++;
            if(M[x] > 1 && vis[x] == 0)
            {
                cnt++;
                vis[x] = 1;
            }
        }

        printf("%d\n",cnt);
    }

	return 0;
}

/// save test cases ...

/*

5 5
3 3 1 2 4
6 10
6 1 3 6 6 4 2 3 1 2


*/

