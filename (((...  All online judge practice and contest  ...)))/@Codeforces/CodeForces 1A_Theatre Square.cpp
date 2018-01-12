#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n,m,a;

    while(scanf("%I64d %I64d %I64d",&n, &m, &a) == 3)   ///AC
    {
        if(n%a == 0) n /= a;
        else n = n/a + 1;

        if(m%a == 0) m /= a;
        else m = m/a + 1;

        printf("%I64d\n",n*m);
    }

    return 0;
}
