#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;

    cin >> n >> t;

    getchar();

    string str;

    cin >> str;

    vector <int> vec;

    int j=0;

    for(int i=0; i<n; i++)
        if(str[i] == 'B') vec.push_back(i); ///Ac

    while(t--)
    {
        for(int i=0; i<vec.size(); i++)
        {
            if(vec[i]+1 < n && str[vec[i]+1] == 'G')
            {
                str[vec[i]] = 'G';
                str[vec[i]+1] = 'B';

                vec[i]++;
            }
        }
    }

    cout << str << endl;

    return 0;
}

/*

8 2
BGBGGBGB

*/



