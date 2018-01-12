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
#define N 5000007

int main()
{
    int tcas;

    cin >> tcas;

    while(tcas--)
    {
        int n;

        cin >> n;
        int cnt = 0;

        for(int i=0; ; i++)     ///Ac
        {
            if(n <= 0) break;

            int x = n%2;
            n /= 2;
            if(x == 1) cnt++;
            if(x == 1)
            {
                if(cnt != 1) printf(" %d",i);
                else printf("%d",i);
            }
        }

        printf("\n");
    }

	return 0;
}

/// save test cases ...

/*




*/

