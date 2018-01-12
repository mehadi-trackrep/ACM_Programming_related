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
#define Max 10

int len;
int vis[Max];           /// AC
int ara[10];

bool flag;

void backtrack(int cnt,int sum)     /// cnt means every  time koyta number nicci ....
{
    //cerr << "ind: " << ind << " and sum: " << sum << endl;

    if(cnt == 5)  /// 5 tay neoa hoye gele dekhbo sum == 23 kina ..?
    {
        if(sum == 23)
        {
            flag = true;
            return;
        }
    }

    for(int i=0; i<5; i++)
    {
        if(!vis[i])
        {
            vis[i] = 1;

            backtrack(cnt+1,sum+ara[i]);
            backtrack(cnt+1,sum-ara[i]);
            backtrack(cnt+1,sum*ara[i]);

            vis[i] = 0;
        }
    }
}


int main()
{


    while(scanf("%d%d%d%d%d",&ara[0],&ara[1],&ara[2],&ara[3],&ara[4]) == 5)
    {
        if(!(ara[0]+ara[1]+ara[2]+ara[3]+ara[4])) break;

        flag = false;

        memset(vis,0,sizeof(vis));

        for(int i=0; i<5; i++)
        {
            vis[i] = 1;
            backtrack(1,ara[i]);    /// every time 1 ta kore data niye pivot hishebe kaj korci ......
            vis[i] = 0;
        }

        if(flag) printf("Possible\n");
        else printf("Impossible\n");
    }

    return 0;
}

/// save test cases ...

/*

1 1 1 1 1
1 2 3 4 5
2 3 5 7 11
0 0 0 0 0


*/



