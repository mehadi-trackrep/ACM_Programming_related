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
string str[20];

void backtrack(int index)
{
    int i;
    if(ans.size()==k)
    {
            for(i=0; i<k; i++)
            {
                printf("%d",ans[i]);
                if(i<5)
                    printf(" ");
            }
            printf("\n");
            return;
    }

    for(i=0; i<k; i++)
    {
        //printf("check: %d\n",index);
        ans.push_back(ar[i]);
        taken[i]=1;
        backtrack(i+1);
        taken[i]=0;
        ans.pop_back();
    }
}

int main()
{
    str[0] = "+-*+";
    str[1] = "+-*-";
    str[2] = "+-**";
    str[3] = "+*-+";
    str[4] = "+*--";
    str[5] = "+*-*";

    str[6] = "-*++";
    str[7] = "-*+-";
    str[8] = "-*+*";
    str[9] = "-+*+";
    str[10] = "-+*-";
    str[11] = "-+**";

    str[12] = "*+-+";
    str[13] = "*+--";
    str[14] = "*+-*";
    str[15] = "*-++";
    str[16] = "*-+-";
    str[17] = "*-+*";

    int ara[10];

    while(scanf("%d%d%d%d%d",&ara[0],&ara[1],&ara[2],&ara[3],&ara[4]) == 5)
    {
        if(!(ara[0]+ara[1]+ara[2]+ara[3]+ara[4])) break;

        int ck,sum;

        for(int i=0; i<18; i++)
        {
            sum = 0;
            ck = 0;

            if(str[i][0] == '+') sum += (ara[0]+ara[1]);
            else if(str[i][0] == '-') sum += (ara[0]-ara[1]);
            else if(str[i][0] == '*') sum += (ara[0]*ara[1]);

            for(int j=1; j<4; j++)
            {
                if(str[i][j] == '+') sum += ara[j+1];
                else if(str[i][j] == '-') sum -= ara[j+1];
                else if(str[i][j] == '*') sum *= ara[j+1];
            }
            cerr << "sum: " << sum << endl;
            if(sum == 23)
            {
                ck = 1;
                break;
            }
        }

        if(ck == 1) printf("Possible\n");
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


