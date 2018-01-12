#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int ans;

    while(cin >> N)     /// formula:    1 + 2*2 + 3*3 + 4*4 + ... + N*N;
    {
        ans = (N*(N+1)*(2*N+1))/6;
        printf("--> %d\n",ans);
    }

    return 0;
}
