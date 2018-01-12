#include <iostream>
#include <string>
using namespace std;
int main()
{
    int len;
    string str = "Tonmoy vs Mehadi";
    cin >> len;
    string substring = str.substr(0,len);/// 4, starting index and
                                            /// 5,number of total char from 4 index
    cout << "Substring of length => " << len << " is : \n" << substring << endl;
    return 0;
}
