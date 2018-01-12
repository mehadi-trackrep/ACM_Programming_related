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
#define Max 100005

int main()
{
    int n;
    string str;
    int zero = 0,one = 0;   ///AC
    cin >> n;
    cin >> str;
    for(int i=0; i<n; i++)
    {
        if(str[i] == '0') zero++;
        else one++;
    }

    if(zero == one) printf("0\n");
    else if(zero > one) printf("%d\n",zero-one);
    else if(zero < one) printf("%d\n",one-zero);

    return 0;
}

/// save test cases ...

/*




*/
