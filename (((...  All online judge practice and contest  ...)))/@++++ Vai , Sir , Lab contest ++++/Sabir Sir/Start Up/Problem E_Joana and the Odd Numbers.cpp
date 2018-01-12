#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r,i,j;
    long long sum,total;

    while(scanf("%lld",&n) == 1){

        r = n/2 + 1;

        total = r*r;    /// total number
        sum = total*total - (total-3)*(total-3);

        printf("%lld\n",sum);

    }

    return 0;
}
