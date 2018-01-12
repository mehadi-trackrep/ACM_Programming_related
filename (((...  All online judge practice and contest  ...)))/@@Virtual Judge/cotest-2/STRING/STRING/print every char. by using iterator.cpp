#include <iostream>
#include <iterator>
#include <string>

using namespace std;

int main()
{
    int len;
    string str = "Dhono Mehadi";
    string :: iterator it;

    for(it = str.begin();it != str.end();it++)
        cout << *it << endl;

    return 0;
}
