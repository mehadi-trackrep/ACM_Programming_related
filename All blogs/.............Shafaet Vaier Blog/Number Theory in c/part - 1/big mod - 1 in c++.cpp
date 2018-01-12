#include <iostream>
using namespace std;

long long int modu(long long int b,long long int p,long long int m)
{
    if(p == 0)
        return 1;
    if(p%2 == 0)
    {
        long long int t = modu(b,p/2,m);
    //return (modu(b,p/2,m)*modu(b,p/2,m))%m;
        return (t*t)%m;
    }
    else
        return ((b%m) * modu(b,p-1,m)) % m; /// thik ace
}
int main()
{
    long long int b,p,m;

    while(cin >> b >> p >> m)
    {
        cout << modu(b,p,m) << endl;
    }

    return 0;
}

