#include <bits/stdc++.h>
using namespace std;


int main()
{
    long long n,sq,ans;
    while(cin >> n){
        ans=0;
        if(n&1){
            sq = sqrt(n);
            int ck=0,p;
            for(int i=2; i<=sq; i++){
                if(n%i == 0){
                    ck=1;
                    p = i;
                    break;
                }
            }
            if(ck){
                ans = 1 + (n-p)/2;
            }
            else{
                ans = 1 + (n-n)/2;
            }
        }
        else{
            ans = n/2;
        }
        cout << ans << endl;
    }
    return 0;
}
