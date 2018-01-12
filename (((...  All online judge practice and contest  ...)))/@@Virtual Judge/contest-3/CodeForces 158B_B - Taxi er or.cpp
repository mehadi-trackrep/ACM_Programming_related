#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x,total;

    scanf("%d",&n);

    map <int,int> mp;

    for(int i=1; i<=n; i++){    ///AC
        scanf("%d",&x);
        mp[x]++;
    }

    int one,two,three,four;

    one = mp[1];
    two = mp[2];
    three = mp[3];
    four = mp[4];

    total = four + three;
    one -= three;

    total += two/2;

    two %= 2;

    total += one/4;

    one %= 4;

    if(two > 0)
    {
        total++;
        one -= 2;
    }

    if(one > 0) total++;

    printf("%d\n",total);

    return 0;
}

