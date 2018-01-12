#include <iostream>
#include <string>
using namespace std;
int main()
{
    int len;
    string str = "Tonmoy vs Mehadi";
    cin >> len;
    string newstring = str.erase(8,len); /// 8 theke len porjonto erase korbe
    cout << "After Erasing string of length => " << len << " is : \n" << newstring << endl;
    cout << "The string => " << len << endl << " is : \n" << str << endl;
    return 0;
}
