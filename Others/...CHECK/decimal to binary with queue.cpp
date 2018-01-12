#include <iostream>
#include <cstdio>
#include <queue>
#include <string>
using namespace std;
int main()
{
    string n;
    cin >> n;
    queue <int> q;
    string :: iterator it;
    for(it = n.end()-1;it >= n.begin();it--){   /// reverse output
        cout << *it;
        /// ...
    }
    return 0;
}
