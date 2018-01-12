#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k=1;
    for(int i=0; i<s.size(); i++)
    {
        cout << s[i] << s[s.size()-1-i];
    }
    return 0;
}
