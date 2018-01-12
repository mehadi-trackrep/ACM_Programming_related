#include <bits/stdc++.h>
using namespace std;

inline unsigned int bit0( unsigned int x )
{
    return (x & 1);
}

int parity( unsigned int n)
{
    unsigned int par = 0;
    for( ; n != 0; n >>=1 )
    par ^= bit0(n);
    return (par);
}

int main()
{
    int par,n,inl;
    cin >> n;
    par = parity(n);
    inl = bit0( n );
    cout << par << endl;
    cout << inl << endl;
    return 0;
}
