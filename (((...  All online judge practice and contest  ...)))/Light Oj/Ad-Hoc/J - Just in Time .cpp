#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n == 2) cout << n << endl;
    else{
        if(n&1) cout << n << endl;
        else cout << n-1 << endl;
    }
}
