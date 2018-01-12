#include <iostream>
#include <iterator>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    int len;
    string str = "Dhono Mehadi";
    string :: iterator it;

    for(it = str.begin();it != str.end();it++)
        cout << *it << endl;
    char s[200005];

    gets(s+1);  /// means string tir index 1 theke suru hobe :)     (V.V.I.)

    for(int i=1; s[i]!='\0'; i++) cout << s[i] << endl;

    return 0;
}
