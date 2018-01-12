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

int main()
{
    int R,N;
    int c=1;
    while(scanf("%d%d",&R,&N) == 2) ///AC
    {
        if(R == 0 && N == 0) break;
        if(R%N == 0)
        {
            if((R/N)-1 > 26) printf("Case %d: impossible\n",c++); /// or, N*27 < R  holei impossible
            else printf("Case %d: %d\n",c++,(R/N)-1);
        }
        else
        {
            if((R/N) > 26) printf("Case %d: impossible\n",c++);
            else printf("Case %d: %d\n",c++,(R/N));
        }
    }
	return 0;
}

/// save test cases ...

/*




*/

