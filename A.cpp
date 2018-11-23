#include <bits/stdc++.h>
using namespace std;


int main(){

    int n,s;
    cin >> n >> s;
    int ans;
    if(n>=s) ans=1;
    else{
        if(s%n == 0) ans = s/n;
        else ans = s/n + 1;
    }
    cout << ans << endl;
    return 0;
}
