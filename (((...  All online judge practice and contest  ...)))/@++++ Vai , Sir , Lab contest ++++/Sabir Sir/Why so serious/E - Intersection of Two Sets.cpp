#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;

    cin >> tcas;

    while(tcas--)
    {
        int s1,s2;

        map <int,int> mp;       ///AC

        cin >> s1;

        int x;

        for(int i=1; i<=s1; i++)
        {
            scanf("%d",&x);
            mp[x]++;
        }

        cin >> s2;

        int cnt = 0;

        for(int i=1; i<=s2; i++)
        {
            scanf("%d",&x);
            mp[x]++;
                if(mp[x] == 2) cnt++;
        }

        printf("%d\n",cnt);
    }

    return 0;
}

/*

1
5
1
2
3
4
5
6
2
3
4
5
6
7

*/

