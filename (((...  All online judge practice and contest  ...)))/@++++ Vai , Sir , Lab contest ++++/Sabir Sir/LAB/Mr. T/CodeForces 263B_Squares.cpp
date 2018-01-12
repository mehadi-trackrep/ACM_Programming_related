#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    int ara[55];
    cin >> n >> k;

    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    if(k > n)
    {
        printf("-1\n"); ///AC
        return 0;
    }

    sort(ara,ara+n);

    int cnt = 0;

    int a = n-k;

    if(a >= 0)
    {
        printf("%d %d\n",ara[a],ara[a]);
    }
    else printf("-1\n");
    return 0;
}
