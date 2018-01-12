#include <iostream>
#include <string>
using namespace std;
int main()
{
    int len;
    string str = "Tonmoy vs Mehadi",str2;
    /// cin >> str2; /// ei input space er ag porjonto input nei
    getline(cin,str2,'\n');
    string newstring = str.insert(10,str2); /// 8 index a str2 insert korbe
    cout << "After Erasing string => "  << " is : \n" << newstring << endl;
    cout << "The string => " << endl << " is : \n" << str << endl;
    return 0;
}

