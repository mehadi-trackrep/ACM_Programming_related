#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b=0;
    while(cin >> n)
    {
        a = 2;
        b=0;
        while(n>a+1)
        {
            b++;
            n -= a;
        }
        if(n!=0) cout << b+1 << endl;
        else
        {
            cout << b << endl;
        }
        for(int i=0; i<b; i++) cout << 2 << " ";
        cout << n << endl;
    }
}
