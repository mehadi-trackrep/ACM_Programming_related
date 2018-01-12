#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N,E;
    cin >> N >> E;
    string city;
    set <string> s;
    map <string,int> mp;
    set <string> :: iterator it;
    int ck_size = 0,x = 0;
    for(int i = 1; i <= E; i++)
    {
        cin >> city;
        s.insert(city);
        if(s.size() > ck_size){
            mp[city] = ++x;
            ck_size = s.size();
            //cout << mp[city] << ' ' << x << endl;
        }
        cin >> city;
        s.insert(city);
        if(s.size() > ck_size){
            mp[city] = ++x;
            ck_size = s.size();
            //cout << mp[city] << ' ' << x << endl;
        }
    }

    for(it = s.begin();it != s.end(); it++)
    {
        //mp[*it] = x++;
        cout << *it << ' ' << mp[*it] << endl;
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
