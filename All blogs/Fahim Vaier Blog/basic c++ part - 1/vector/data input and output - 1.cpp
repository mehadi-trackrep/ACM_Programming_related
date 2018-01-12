#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector< int > v;

    for(int i = 0;i < 5;i++)  /// size check => vector.size()
        v.push_back(i);

    for(int i = 0; i < v.size(); i++) cout << v[i] << " " << endl;

    cout << "\n" << endl;

    for(int i = 0;i < 5;i++)
        cin >> v[i] ;

    for(int i = 0; i < v.size(); i++) cout << v[i] << endl;

    return 0;
}


