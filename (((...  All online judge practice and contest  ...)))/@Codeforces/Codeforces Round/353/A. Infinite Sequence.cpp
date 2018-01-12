#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    while(cin >> a >> b >> c)   ///WA
    {
        if(c == 0)
        {
            if(a == b) printf("YES\n");
            else printf("NO\n");
        }
        else if(b%c == a) printf("YES\n");
        else printf("NO\n");

    }

    return 0;
}
