#include <iostream>
#include <map>
#include <string>
#include <iterator>
using namespace std;
int main()
{
    map<string,int> stringCounts;
    string str;

    while( cin >> str ) stringCounts[str]++;    /// terminate by CTRL + z

    map<string,int>::iterator iter;
    for( iter = stringCounts.begin(); iter != stringCounts.end(); iter++ )
    {
        cout << "word: " << iter->first << ", count: " << iter->second << endl;
    }
    return 0;
}
