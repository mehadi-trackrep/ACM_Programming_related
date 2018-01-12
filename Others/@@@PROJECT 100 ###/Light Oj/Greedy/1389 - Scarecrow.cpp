#include <bits/stdc++.h>
using namespace std;

int main()      ///AC
{
    int tc;
    string str;
    int len;
    cin >> tc;
    for(int c=1; c<=tc; c++)
    {
        cin >> len >> str;
        int cnt = 0;
        for(int i=0; i<len; i++)
        {
            if(str[i] == '.')
            {
                cnt++;
                i+=2;
            }
        }

        printf("Case %d: %d\n",c,cnt);
    }
    return 0;
}

