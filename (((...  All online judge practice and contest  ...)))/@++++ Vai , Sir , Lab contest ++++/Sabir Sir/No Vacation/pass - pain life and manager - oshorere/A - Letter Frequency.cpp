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
    int tcas;
    cin >> tcas;
    getchar();          ///AC

    while(tcas--)
    {
        string str;
        getline(cin,str);
        int len = str.length();
        int M = 0;
        map <char,int> mp;
        for(int i=0; i<len; i++)
        {
            if( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )
            {
                if(str[i] >= 'A' && str[i] <= 'Z') str[i] = str[i] + ' ';
                mp[str[i]]++;
                if(mp[str[i]] > M) M = mp[str[i]];
            }
        }
        //cerr << "check: M-> " << M << endl;
        map <char,int> :: iterator it;

        for(it = mp.begin(); it!=mp.end(); it++)
        {
            if(it->second == M)
            {
                cout << it->first;
            }
        }
        cout << endl;
    }

	return 0;
}

/// save test cases ...

/*




*/

