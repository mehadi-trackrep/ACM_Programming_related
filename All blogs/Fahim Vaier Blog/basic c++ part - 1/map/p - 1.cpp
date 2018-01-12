#include <iostream>
#include <map>
using namespace std;

int main(){
    map< string, int  > m;
    string goru;

    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;  /// how ?
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;
    }

    return 0;
}
