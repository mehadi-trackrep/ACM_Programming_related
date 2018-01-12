#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;
    while(cin >> tcas)  ///AC
    {
        if(tcas == 0)
            break;
        getchar();
        map <string,int> mp;
        string str;
        for(int i=1; i<=tcas; i++)
        {
            cin >> str;
            mp[str]++;
        }
        map <string,int> :: iterator it;
        string popular;
        int maxm = 0;
        for(it = mp.begin(); it!= mp.end();it++)
        {
            if(it->second > maxm)
            {
                maxm = it->second;
                str = it->first;
            }
        }

        cout << str << endl;
    }
    return 0;
}
