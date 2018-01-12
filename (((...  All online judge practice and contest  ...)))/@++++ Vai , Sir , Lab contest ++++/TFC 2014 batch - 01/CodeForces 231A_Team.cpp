#include <bits/stdc++.h>
using namespace std;

int main()      ///AC
{
    int n;
    cin >> n;
    int a,b,c;
    int sum = 0;
    int cnt = 0;
    for(int i=1; i<=n; i++)
    {
        sum = 0;
        cin >> a >> b >> c;
        sum = (a+b+c);
        if(sum >= 2) cnt++;
    }

    printf("%d\n",cnt);
}

