#include <iostream>
using namespace std;

int main() {
    int cases, caseno = 0, a, b;
    cin >> cases;
    while( cases-- ) {
        cin >> a >> b;
        cout << "Case " << ++caseno << ": " << a + b << endl;
    }
    return 0;
}
