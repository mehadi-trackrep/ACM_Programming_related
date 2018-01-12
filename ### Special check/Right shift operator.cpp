#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,a,b;
    while (cin >> N >> a >> b)
    {
        int v = a >>b;
        int ck = N | v;
        cout << v << endl;
        cout << ck << endl;
    }
    return 0;
}
