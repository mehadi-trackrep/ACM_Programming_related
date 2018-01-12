#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    while(cin >> n)
    {
        long long total;
        if(n%2 == 1)
        {
            total = ((n*(n+2)*(2*n+1))-1)/8;
            printf("%lld\n",total);
        }
        else
        {
            total = (n*(n+2)*(2*n+1))/8;
            printf("%lld\n",total);
        }
    }
    return 0;
}
