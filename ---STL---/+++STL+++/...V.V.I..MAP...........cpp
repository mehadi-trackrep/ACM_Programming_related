#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,E;
    cin >> N >> E;
    getchar();
    string city;

    map <string,int> mp;

    int ck_size = 0,x = 1;

    for(int i = 1; i <= E; i++)
    {
        cin >> city;

        mp[city] = 1;

        cin >> city;

        mp[city] = 1;
    }

    map <string,int> :: iterator it;

    /// use of auto keyword ..
    iterator it1;

    for (auto it1: mp)
    {
        string key = it1.first;
        int value = it1.second;
        cout << "---=-=> " << key << "  " << value << endl;
    }

    for(it = mp.begin(); it != mp.end(); it++)
    {
        string key = it->first;
        int value = it->second;
        cout << key << "  " << value << endl;
    }

    return 0;
}

/*

6 8
breakfast office
dressup office
office dinner
office sports
office email
email sports
email dinner
dinner sports

*/
