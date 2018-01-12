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
    string str;

    map <char,char> mp;     ///Ac

    mp['A'] = 'V';
    mp['B'] = 'W';
    mp['C'] = 'X';
    mp['D'] = 'Y';
    mp['E'] = 'Z';

//    mp['V'] = 'A';
//    mp['W'] = 'B';
//    mp['X'] = 'C';
//    mp['Y'] = 'D';
//    mp['Z'] = 'E';

    while(1)
    {
        getline(cin,str);

        if(str == "ENDOFINPUT") break;
        if(str != "START" && str != "END")
        {
            int len = str.length();
            for(int i=0; i<len; i++)
            {
                if(str[i] >= 'A' && str[i] <= 'Z')
                {
                    if(mp[str[i]] != 0) str[i] = mp[str[i]];
                    else str[i] -= 5;
                }
            }

            cout << str << endl;
        }

    }

	return 0;
}

/// save test cases ...

/*




*/
