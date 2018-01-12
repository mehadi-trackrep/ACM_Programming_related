
#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PI acos(-1.0)
#define i64 long long

int timezone[1000][1000];

int main()
{
    int tcase;
    cin >> tcase;

    while(tcase--)
    {
        cin >> r >> c;

        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++)
            {
                scanf("%d",&timezone[i][j]);
            }
        }

        int x,y,time_ReverseFlash,time_Flash = 0;

        cin >> x >> y >> time_ReverseFlash;

        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=c; j++)
            {
                time_Flash += timezone[i][j];
                if(i == x && j == y)
                    break;
            }
        }

        if(time_Flash > time_ReverseFlash)
            printf("NO\n");
        else if(time_Flash < time_ReverseFlash)
        {
            printf("YES\n");
            printf("%d\n",time_ReverseFlash-time_Flash+timezone[x][y]);
        }
        else if(time_Flash == time_ReverseFlash)
        {
            printf("YES\n");
            printf("%d\n",timezone[x][y]);
        }

    }

    return 0;
}

