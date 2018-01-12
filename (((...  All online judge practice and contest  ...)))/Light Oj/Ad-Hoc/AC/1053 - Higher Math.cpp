#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;
    int cas=1;
    long long a,b,c;    ///AC
    cin >> tcas;
    while(tcas--)
    {
        cin >> a >> b >> c;
        if((a*a + b*b == c*c) || (a*a + c*c == b*b) || (c*c + b*b == a*a))
            printf("Case %d: yes\n",cas++);
        else
            printf("Case %d: no\n",cas++);

    }
    return 0;
}

/*

2
36 77 85
40 55 69

*/
