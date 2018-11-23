#include <bits/stdc++.h>
using namespace std;

struct data{
    int x,pos;
    bool operator < (const data &p)const{
        return x < p.x;
    }
};

int main()
{
    int n,k,a;
    data ara[200005];

    memset(ara, sizeof(ara), 0);

    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a;

    }

    for(int i=0; i<sizeof(cnt); i++){
        a = ara[i];
        cout << " cnt[ara[i]]: " << cnt[i] << endl;
    }

    sort(cnt, cnt+n);
    cout << cnt[n-k] << endl;

    return 0;
}
