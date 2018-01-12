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
    string str;
                    ///AC
    while(1)
    {
        getline(cin,str);

        if(str == "") break;

        int len = str.length();

        int M = 0;

        map <char,int> mp;
        mp.clear();

        for(int i=0; i<len; i++)
        {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                mp[str[i]]++;
                if(mp[str[i]] > M) M = mp[str[i]];
            }
        }

        //cerr << "check: M-> " << M << endl;
        map <char,int> :: iterator it;
        //cerr << "check: M: " << M << endl;
        for(it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second == M)
            {
                cout << it->first;
            }
        }

        cout << ' ' << M << endl;
    }

	return 0;
}

/// save test cases ...

/*

When riding your bicycle backwards down a one-way street, if the
wheel falls of a canoe, how many ball bearings does it take to fill
up a water buffalo?
Hello Howard.


*/


