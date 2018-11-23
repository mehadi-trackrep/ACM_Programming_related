#include <bits/stdc++.h>
using namespace std;

#define sf1(n) scanf("%d",&n)
#define sf2(n,m) scanf("%d%d",&n,&m)

#define pf1(n) printf("%d\n",n)
#define pf2(n,m) printf("%d %d\n",n,m)


vector<int> ara;

int main()
{
    int tc;

    int n,q,a;
    int pl,pr,l,r;

    sf1(tc);

    int ans;

    for(int c=1; c<=tc; c++){
        sf2(n,q);

        ara.clear();

        for(int i=0; i<n; i++){
            sf1(a);
            ara.push_back(a);
        }
        printf("Case %d:\n",c);
        for(int i=0; i<q; i++){
            sf2(l,r);
            pl = lower_bound(ara.begin(), ara.end(), l) - ara.begin();
            pr = upper_bound(ara.begin(), ara.end(), r) - ara.begin();
            ans = pr-pl;
            pf1(ans);
        }
    }

    return 0;
}


/**


1
5 3
1 4 6 8 10
0 5
6 10
7 100000


**/
