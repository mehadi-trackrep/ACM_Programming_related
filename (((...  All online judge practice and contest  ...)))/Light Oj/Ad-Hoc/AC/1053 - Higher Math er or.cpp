#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;
    int cas=1;
    long long ara[5];      ///AC
    cin >> tcas;
    while(tcas--)
    {
        scanf("%lld %lld %lld",&ara[0],&ara[1],&ara[2]);
        sort(ara,ara+3); /// 3 means 3 ta data sort korbe...
        if((ara[0]*ara[0] + ara[1]*ara[1] == ara[2]*ara[2]))
            printf("Case %d: yes\n",cas++);
        else
            printf("Case %d: no\n",cas++);

    }
    return 0;
}

/*

2
36 77 85
40 55 69

*/

