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

    total = four + two/2;
    two %= 2;

    if(one > 0 && three > 0){
        if(one >= three){
            one -= three;
            total += three;
        }
        else{
            total += three;
            one = 0;
        }
    }
    else
        total += three;

    if(one > 0 && two > 0){
        if(one <= 2){
            total++;
            one = 0;
            two = 0;
        }
        else{
            two = 0;
            one -= 2;
            total++;
        }
    }

    if(two > 0)
        total++;
    if(one > 0){
        total += one/4;
        one %= 4;
        if(one > 0)
            total++;
    }

    printf("%d\n",total);

    return 0;
}
