#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,P,Q;
    int tcas,c=1;

    cin >> tcas;

    while(tcas--)
    {
        int ara[35];

        cin >> n >> P >> Q;

        for(int i=0; i<n; i++)
            scanf("%d",&ara[i]);    ///AC

        sort(ara,ara+n);

        int sum = 0;
        int cnt=0;

        for(int i=0; i<n; i++)
        {
            sum += ara[i];
            if(sum > Q)
            {
                break;
            }
            else
                cnt++;
        }

        if(cnt > P)
            cnt = P;

        printf("Case %d: %d\n",c++,cnt);
    }

    return 0;
}


/*

2
5 6 10
1 2 3 4 5
4 6 10
1 2 3 4


2
3 2 10
1 2 3
4 5 5
4 4 5 5

*/
