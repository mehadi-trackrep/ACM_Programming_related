#include <bits/stdc++.h>
using namespace std;


int egcd(int a, int b, int &x, int &y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = egcd (b%a, a, &x1, &y1);    /// problem ace ...
    x = y1 − (b / a) * x1;
    y = x1;
    return d;
}

int main()
{
    int a,b;

    cin >> a >> b;

    int gcd = egcd(a,b,1,0);

    printf("%d\n",gcd);

    return 0;
}