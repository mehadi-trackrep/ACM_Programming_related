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

int main()
{
    int tcas;
    double sum;
    cin >> tcas;

    while(tcas--)       ///AC using formula , calculating number of digits in N!
    {
        long long n;
        cin >> n;
        sum = 0;
        for(long long i=1; i<=n; i++)
            sum += log10(double(i));
        sum = ceil(sum);
        if(n > 1)
            printf("%.0lf\n",sum);
        else if(n == 1)
            printf("1\n");
    }
	return 0;
}

/// save test cases ...

/*




*/
