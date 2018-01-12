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

int N,m;

struct data
{
    int val,modval;
    /// instructor:-
    data(int v)
    {
        val=v;
        modval=val%m;
    }
    bool operator < (const data & p)const
    {
        if(modval == p.modval)
        {
            if((val&1) && (p.val&1)) return val > p.val;
            else if(!(val&1) && !(p.val&1)) return val < p.val;
            else
            {
                if(val&1) return true;
                else return false;
            }
        }
        return modval < p.modval;
    }
}ara[Max];


int main()
{
    while(scanf("%d%d",&N,&m) == 2)
    {
        if(!(N+m)) break; /// n == 0 && m == 0 hole break
        for(int i=0; i<N; i++)
        {
            int x;
            cin >> x;
            ara[i] = data(x);
            //ara[i].val = x;
        }

        sort(ara,ara+N);

        for(int i=0; i<N; i++)
            printf("%d ",ara[i]);
    }

    return 0;
}

/// save test cases ...

/*




*/

