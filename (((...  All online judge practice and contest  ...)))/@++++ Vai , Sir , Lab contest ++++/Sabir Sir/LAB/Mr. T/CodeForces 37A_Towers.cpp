#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,c = 0,x;

    cin >> n;

    map <int,int> mp;   ///AC

    int y = n;

    int M = 0;

    for(int i=0; i<n; i++)
    {
        cin >> x;
        mp[x]++;

        M = max(M,mp[x]);
    }

    printf("%d %d\n",M,mp.size());

    return 0;
}
