/*
     BISMILLAH HIR RAHMANIR RAHIM
*/

#include <bits/stdc++.h>
using namespace std;

double ara[1000005];        ///AC

/// BASIC: ...............>
/// How many digit of 9! in base 12 , formula:-
/// (log(1)+log(2)+log(3)+log(4)+log(5)+log(6)+log(7)+log(8)+log(9))*(1/log(12))
/// = 5.70
/// = int(5.70)+1
/// = 6 digit

int main()
{
    int tcas;
    int n,base;

    ara[0] = 0.0;

    for(int i=1; i<=1000000; i++)
    {
        ara[i] = ara[i-1] + log((double)i);
    }

    cin >> tcas;

    for(int i=1; i<=tcas; i++)      ///AC
    {
        cin >> n >> base;

        int ans;

        ans = floor(ara[n]/log(base) + 1.0);

        printf("Case %d: %d\n",i,ans);
    }

	return 0;
}

/// save test cases ...

/*




*/

