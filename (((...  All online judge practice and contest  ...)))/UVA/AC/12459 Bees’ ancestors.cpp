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
#define M 100

int main()
{
    i64 ancestors[85];
    i64 a=0,b=1,c,g;

    for(int i=1; i<=80; i++)
    {
        c = a+b;
        a = b;
        b = c;

        ancestors[i] = c;
    }

    while(scanf("%lld",&g) == 1)
    {
        if(g == 0)
            break;

        printf("%lld\n",ancestors[g]);
    }

    return 0;
}
