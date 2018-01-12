#include <iostream>
#include <string>
#include <fstream>

using namespace std;

#define ll long long

int main()
{
    ll n, m;

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout); ///AC

    cin >> n >> m;

    if (n >= m)
    {
        string s(n+m, 'B');
        //cerr << "check: " << s << endl;
        for (ll i = 1; i < m * 2; i += 2)
        {
            s[i] = 'G';
        }
        cout << s << endl;
    }
    else
    {
        string s(m+n, 'G');
        for (ll i = 1; i < n * 2; i += 2)
        {
            s[i] = 'B';
        }
        cout << s << endl;
    }

    return 0;
}
