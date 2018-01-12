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
#define N 5000007
#define ll long long            ///AC

int main()
{
    ll P,E,T;
    ll tcas;
    scanf("%lld",&tcas);
    while(tcas--)
    {
        scanf("%lld%lld%lld",&P,&E,&T); ///AC

        if(P == 0) printf("Impossible\n");
        else if(E != 0 && P != 0)
            printf("%lld Seconds\n",T);
        else if(E == 0 && P != 0) printf("0 Seconds\n");
    }

	return 0;
}

/// save test cases ...

/*

1
5000 1 4


*/
