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
#define Max 100

int len;
int vis[Max];
int store[Max];
int ara[Max];
int pivot_index;

void backtrack(int ind)
{
    if(ind == len)
    {
        int ck = len-6;
        for(int i=len-6; i<len; i++)
        {
            if(i == ck)
                printf("%d",store[i]);
            else printf(" %d",store[i]);
            printf("\n");
        }
        return ;
    }
    for(int i=pivot_index; i<len; i++)
    {
        if(vis[i] == 0)
        {
            vis[i] = 1;
            store[ind] = ara[i];
            backtrack(ind+1);
            vis[i] = 0;
        }
    }
}

int main()
{
    int n;
    while(cin >> n)
    {
        if(!n) break;

        for(int i=0; i<n; i++) scanf("%d",&ara[i]);

        backtrack(0);

        int x = 5;
        int index = 0;
        len = 6;

        while(1)
        {
            int ck=0;
            for(int i=x; i<n; i++)
            {
                ck = 1;
                ara[x] = ara[i];
                memset(vis,0,sizeof(vis));
                backtrack(index);
            }

            if(ck == 0) break;
            x++;
            index++;
            len++;

        }
    }

	return 0;
}

/// save test cases ...

/*




*/

