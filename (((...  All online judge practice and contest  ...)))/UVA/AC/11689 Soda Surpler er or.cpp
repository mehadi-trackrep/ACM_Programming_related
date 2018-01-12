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
    int tcas,e,f,c;
    cin >> tcas;
    while(tcas--)
    {
        cin >> e >> f >> c; ///AC
        int total,sum = 0;
        total = e+f;
        while(total >= c)   /// total >= c condition na dile TLE
        {
            sum += (total/c);
            total = (total/c) + (total%c);
        }
        printf("%d\n",sum);
    }
	return 0;
}

/// save test cases ...

/*

2
9 0 3
5 5 2


*/

