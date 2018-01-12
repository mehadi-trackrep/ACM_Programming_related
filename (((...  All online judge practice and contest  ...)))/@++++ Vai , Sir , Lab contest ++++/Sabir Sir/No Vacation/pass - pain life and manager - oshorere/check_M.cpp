#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <queue>
#include <vector>
#include <set>
#include <map>
//#pragma comment(linker, "/STACK:102400000, 102400000")
using namespace std;
typedef long long ll;
const double pi = acos(-1.0);
const double e = exp(1.0);
const double eps = 1e-8;
const int maxn = 105;
char mat[maxn][maxn];
int n;

bool check(int x);

int main()
{
    ios::sync_with_stdio(false);
    while (~scanf("%d", &n))
    {
        for (int i=0; i<n; i++)
            scanf("%s", mat[i]);

        bool flag = 0;

        for (int i=0; i<n&&!flag; i++)
            for (int j=0; j<n&&!flag; j++)
                if (mat[i][j]=='#')
                {
                    if (check(i+1) && check(i+2) && check(j-1) &&
                            check(j+1) && mat[i+1][j-1]=='#' &&
                            mat[i+1][j]=='#' && mat[i+1][j+1]=='#' &&
                            mat[i+2][j]=='#')
                    {
                        mat[i][j] = '.';
                        mat[i+1][j-1] = '.';
                        mat[i+1][j] = '.';
                        mat[i+1][j+1] = '.';
                        mat[i+2][j] = '.';
                    }
                    else
                        flag = 1;
                }
        if (flag)
            printf("NO\n");
        else
            printf("YES\n");
    }
    return 0;
}

bool check(int x)
{
    if (x>=0 && x<n)
        return 1;
    return 0;
}
