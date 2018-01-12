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
#define Max 500000

int len;
int vis[Max];
char store[Max];
int cnt = 0;
int k;

char ara[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";  ///AC
char str[30];

void backtrack(int ind)
{
    if(ind == len)
    {
        store[ind] = '\0';
        cout << store << endl;
        cnt++;
        //cerr << "***" << store[ind-1] << endl;
        //cout << store[0] << store[1] << store[2] << endl;
        return ;
    }

    for(int i=0; i<len; i++)
    {
        if(vis[i] == 0)
        {
            vis[i] = 1;
            store[ind] = str[i];
            backtrack(ind+1);
            vis[i] = 0;
            //cerr << "***ind: " << ind << endl;
        }
        if(cnt == k) return ;
    }
}

int main()
{
    int tcas,n;
    cin >> tcas;
    for(int i=1; i<=tcas; i++)
    {
        cin >> n >> k;
        cnt = 0;

        printf("Case %d:\n",i);
        memset(vis,0,sizeof(vis));
        strcpy(str,ara);
        len = n;
        backtrack(0);
    }

	return 0;
}

/// save test cases ...

/*




*/

