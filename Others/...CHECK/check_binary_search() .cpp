#include <bits/stdc++.h>
using namespace std;

int ara[50005];

int main()
{
    int n;
    int q;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    cin >> q;
    int x;

    for(int i=1; i<=q; i++)
    {
        scanf("%d",&x);
        if(ara[n-1] < x)
            printf("%d X\n",ara[n-1]);
        else if(ara[0] > x)
            printf("X %d\n",ara[0]);
        else
        {
            int ck = binary_search()
        }

    }

    return 0;
}

