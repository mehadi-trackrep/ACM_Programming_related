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
    long long n;

    while(cin >> n)
    {
        int sum;
        if(n < 5) printf("0\n");
        else
        {
            int total;
            if(n%2 == 0)
            {
                total = n/2;
                sum = 2*(total/3);
            }
            else
            {
                total = (n+1)/2;
                sum = (total/3)+(total-1)/3;
            }
            printf("%d\n",sum);
        }
    }

	return 0;
}

/// save test cases ...

/*




*/

