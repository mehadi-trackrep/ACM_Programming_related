#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int m;
    while(cin >> n >> m)
    {
        //cin >> m;
        printf("%d modulo %d is %d\n",n,m,(n%m));
        printf("--> %d modulo %d is %d\n",n,m,(n%m));
        //printf("10^%d modulo %d is %d\n",n,m,(n%m));
    }
    return 0;
}
