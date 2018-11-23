#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc,ck;
    long long v,w,div;
    cin >> tc;
    for(int i=1; i<=tc; i++){
        cin >> w;
        div=2;
        ck=0;
        while(w){
            if(!(w&1)){
                w = w/2;
                if(w&1){
                    ck=1;
                    break;
                }
            }else break;
            div *= 2;
        }
        if(ck) printf("Case %d: %lld %lld\n",i,w,div);
        else printf("Case %d: Impossible\n",i);
    }
    return 0;
}
