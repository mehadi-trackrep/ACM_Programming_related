#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name[1010];
    int score[1010];
    map <string,int> mp,f;

    int n;

    cin >> n;

    int max_score = 0;

    for(int i=1; i<=n; i++)
    {
        cin >> name[i] >> score[i];
        mp[name[i]] += score[i];
    }

    for(int i=1; i<=n; i++)
    {
        if(max_score < mp[name[i]])
            max_score = mp[name[i]];
    }

    //cerr << "max_score: " << max_score << endl;

    int pos;

    for(int i=1; i<=n; i++)
    {
        //cerr << "mp[name[i]]: " << mp[name[i]] << " and f[name[i]]: " << f[name[i]] << endl;
        f[name[i]] += score[i];

        if(mp[name[i]] < max_score || (f[name[i]]) < max_score) continue;
        else
        {
            pos = i;
            break;
        }
    }

    cout << name[pos] << endl;

    return 0;
}
