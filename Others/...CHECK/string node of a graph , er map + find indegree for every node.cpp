#include <bits/stdc++.h>
using namespace std;
#define max 100
int main()
{
    int N,E;

    cin >> N >> E;

    string city;

    set <string> s;

    vector <int> indegree[max];

    memset(indegree,0,sizeof(indegree));    /// problem ace indegree te...

    map <string,int> mp;
    set <string> :: iterator it;

    int x = 1;
    int ck_size = 0;

    for(int i = 1; i <= E; i++)
    {
        cin >> city;
        s.insert(city);

        if(s.size() > ck_size){
            mp[city] = x++;
            ck_size = s.size();
        }

        cin >> city;
        s.insert(city);

        if(s.size() > ck_size){
            mp[city] = x++;
            ck_size = s.size();
        }

        //indegree[x-1]++;
    }

    ///map er output:
    cout << "\n\n";
    for(it = s.begin();it != s.end(); it++)
    {
        mp[*it] = x++;
        cout << *it << ' ' << mp[*it] << endl;
    }

    ///indegree er output:
    for(int i = 1;i <= N;i++){
        cout  << endl;
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

