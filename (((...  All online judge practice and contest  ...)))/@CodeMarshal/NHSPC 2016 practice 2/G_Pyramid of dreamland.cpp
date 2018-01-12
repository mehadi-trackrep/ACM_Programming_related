#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,total,c=1;
    int ara[1005];

    for(int i=2; i<=1000; i++)
    {
       ara[i] = (i*(i+1))/2 - i;
    }

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);

        printf("Case %d: %d\n",c++,ara[n]);
    }

    return 0;
}

