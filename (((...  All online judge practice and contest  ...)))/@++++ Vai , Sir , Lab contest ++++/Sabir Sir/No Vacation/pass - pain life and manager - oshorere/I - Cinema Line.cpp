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

int ara[100005];

int main()
{
    int n;

    while(cin >> n)
    {
        for(int i=0; i<n; i++)
            scanf("%d",&ara[i]);

        map <int,int> mp;

        mp.clear();

        mp[25]++;

        if(ara[0] == 25 && (ara[1] == 25 || ara[1] == 50))  /// AC
        {
            int ck = 1;
            for(int i=1; i<n; i++)
            {
                if(ara[i] == 25) mp[25]++;
                else if(ara[i] == 50)
                {
                    if(mp[25] >= 1)
                    {
                        mp[50]++;
                        mp[25]--;
                    }
                    else
                    {
                        ck = 0;
                        break;
                    }
                }
                else if(ara[i] == 100)
                {
                    if(mp[25] >= 1 && mp[50] >= 1)
                    {
                        mp[100]++;
                        mp[50]--;
                        mp[25]--;
                    }
                    else if(mp[25] >= 3)
                    {
                        mp[100]++;
                        mp[25] -= 3;
                    }
                    else
                    {
                        ck = 0;
                        break;
                    }
                }
            }

            if(ck == 1) printf("YES\n");
            else printf("NO\n");
        }

        else printf("NO\n");
    }

	return 0;
}

/// save test cases ...

/*

4
25 25 50 50
2
25 100
4
50 50 25 25


*/

