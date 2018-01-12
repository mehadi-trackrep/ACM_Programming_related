#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;

    cin >> n >> t;

    getchar();

    string str;

    cin >> str;

    int ara[55];

    int j=0;

    for(int i=0; i<n; i++)
        if(str[i] == 'B') ara[j++] = i;

    while(t--)
    {
        for(int k=0; k<j; k++)
        {
            if(ara[k]+1 < n && str[ara[k]+1] == 'G')
            {
                str[ara[k]] = 'G';
                str[ara[k]+1] = 'B';

                ara[k]++;
            }
        }
    }

    cout << str << endl;

    return 0;
}

/*

8 8
BGBGGBGB

*/


