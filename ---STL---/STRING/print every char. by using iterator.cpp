#include <iostream>
#include <iterator>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
    int len;
    string str = "cIkkkI Mehadi";
    string :: iterator it;

    for(it = str.begin();it != str.end();it++)
        cout << *it << endl;
    char s[200005];

    gets(s+1);  /// means string tir index 1 theke suru hobe :)     (V.V.I.)

    for(int i=1; s[i]!='\0'; i++) /// s[i]!='\0' (null char.)
        cout << s[i] << endl;

    return 0;
}
