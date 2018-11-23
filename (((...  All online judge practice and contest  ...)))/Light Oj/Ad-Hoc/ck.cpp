#include <bits/stdc++.h>
#define mx 100005
#define ll long long
using namespace std;
int cnt[1000006];
int main()
{
    int n;
    scanf("%d", &n);
    int ara[n];
    ll sum = 0;
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &ara[i]);
        cnt[ara[i]]++;
        sum += ara[i];
    }
    int ans = 0;
    vector<int> vt;
    for(int i = 0; i<n; i++)
    {
        sum -= ara[i];
        cnt[ara[i]]--;
        if(sum % 2 == 0 && sum/2 <= 1000000 && cnt[sum/2]){
            ans++;
            vt.push_back(i+1);
        }
        cnt[ara[i]] ++;

        sum += ara[i];
    }
    printf("%d\n", ans);
    for(int x : vt)
        printf("%d ", x);

    return 0;
}

