#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PI acos(-1.0)
#define i64 long long

int main()
{
    map<string,int> stringCounts;
    string str;

    int v=1;
    while( cin >> str )
    {
        if(stringCounts[str] < 1)
            stringCounts[str] = v++;
    }

    map<string,int>::iterator iter;
    for( iter = stringCounts.begin(); iter != stringCounts.end(); iter++ )
    {
        cout << "word: " << iter->first << ", count: " << iter->second << endl;
    }
    return 0;
}

