#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <map>
#include <queue>
#include <string>
#include <vector>
using namespace std;
const int MaxN = 1e6 + 5;
int q, m, n, tot, sum1[MaxN], sum2[MaxN], u, v, flag = 0, vis[MaxN];
char s[1005][1005];
int main()
{
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++)
	{
		getchar();
		for(int j = 1; j <= m; j++)
		{
			scanf("%c", &s[i][j]);
			if(s[i][j] == '*')
			{
				sum1[i]++;
				sum2[j]++;
				tot++;
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(s[i][j] == '*')
			{
				if(sum1[i] + sum2[j] - 1 == tot)
				{
					u = i;
					v = j;
					flag = 1;
					break;
				}
			}
			else
			{
				if(sum1[i] + sum2[j] == tot)
				{
					u = i;
					v = j;
					flag = 1;
					break;
				}
			}
		}
	}
	if(flag == 1) printf("YES\n"), printf("%d %d\n", u, v);
	else printf("NO\n");
}
