#include <bits/stdc++.h>
using namespace std;

int solve(int n, int d){
    int rim,cnt=1;
    rim = d%n;
    while(rim){
        rim = rim*10 + d;
        if(rim>=n) rim %= n;
        cnt++;
    }
    return cnt;
}

int main(){
    int tc;
    int n,d,ans;
    cin >> tc;
    for(int c=1; c<=tc; c++){
        cin >> n >> d;
        ans = solve(n,d);
        printf("Case %d: %d\n",c,ans);
    }
}
