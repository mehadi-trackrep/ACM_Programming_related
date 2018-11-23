
#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int tc;
    ll a,b,k,ans,val;
    cin >> tc;
    while(tc--){

        cin >> a >> b >> k;
        if(k%2 == 0){
            val = k/2;
            ans = val*a - val*b;
        }else{
            val = k/2;
            ans = (val+1)*a - val*b;
        }
        cout << ans << endl;
    }
}
