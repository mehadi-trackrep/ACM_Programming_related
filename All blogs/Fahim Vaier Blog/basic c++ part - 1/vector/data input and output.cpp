#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector< int > v;
    v.push_back( 100 );
    v.push_back( 99 );
    v.push_back( 98 );
    v.push_back( 97 );

    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;

    return 0;
}

