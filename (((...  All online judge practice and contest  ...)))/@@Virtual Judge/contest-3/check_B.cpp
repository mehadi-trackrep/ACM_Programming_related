#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x,total = 0;

    while(scanf("%d",&n) == 1){

        map <int,int> mp;
        mp.clear();total = 0;
        for(int i=1; i<=n; i++){
            scanf("%d",&x);
            mp[x]++;
        }

        int one,two,three,four;

        one = mp[1];
        two = mp[2];
        three = mp[3];
        four = mp[4];

        ///printf("\none: %d\ntwo: %d\nthree: %d\nfour: %d\n",one,two,three,four);

        total = four+three+(two/2)+(one/4);

        one %= 4;
        two %= 2;

        if(one > 0 && three > 0){
            if(one >= three)
                one -= three;
            else
                one = 0;
        }

        if(two > 0){
            if(one > 0){
                if(one == 1 || one == 2)
                    total += 1;
                else if(one == 3)
                    total += 2;
            }
            else
                total += 1;
        }

        printf("%d\n",total);

        cout << endl;
    }

    return 0;
}

/*

5
1 2 4 3 3

8
2 3 4 4 2 1 3 1

10
4 4 4 3 3 3 2 2 2 1



*/
