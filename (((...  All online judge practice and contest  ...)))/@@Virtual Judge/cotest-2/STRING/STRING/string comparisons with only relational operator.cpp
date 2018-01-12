#include <iostream>
#include <string>
using namespace std;
int main()
{
    int len;
    string str = "Mehadi",str2;

    getline(cin,str2,'\n');

    if(str2 > str)
        cout << "str2 is big" << endl;
    else if(str2 < str)
        cout << "str2 is small" << endl;
    else
        cout << "str2 and str are equal" << endl;
    return 0;
}


