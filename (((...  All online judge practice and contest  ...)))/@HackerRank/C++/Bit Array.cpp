#include <bits/stdc++.h>
using namespace std;

#define m 2147483648
#define ull unsigned long long

int main()
{
     ull N,S,P,Q;

    while(cin >> N >> S >> P >> Q)
    {
        map <ull,ull> mp;

        ull a = S%m;
        mp[a]++;

        for(ull i=1; i<N; i++)
        {
            if(a == (a*P + Q)%m) break;
            a = (a*P + Q)%m;
            mp[a]++;
        }

        printf("%lld\n",mp.size());
    }

    return 0;
}

/*

100000000 1232077670 126810854 1536183938
26

100000000 831602480 704408287 1134515747
100000000

3 1 1 1

output:
3

*/
