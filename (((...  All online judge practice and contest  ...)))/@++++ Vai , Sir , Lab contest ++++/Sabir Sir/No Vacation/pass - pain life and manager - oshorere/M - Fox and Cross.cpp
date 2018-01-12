#include <bits/stdc++.h>
using namespace std;

int n;

bool check(int ind)
{
    if(ind >= 0 && ind < n) return 1;   ///AC
    else return 0;
}

int main()
{
    string str[100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> str[i];
        //cerr << str[i] << endl;
    }
    bool flag = 0;
    for(int i=0; i<n&&!flag; i++)
    {
        for(int j=0; j<n&&!flag; j++)
        {
            if(str[i][j] == '#')
            {
                if(check(i+1) && check(i+2) && check(j-1) && check(j+1) && str[i+1][j] == '#' && str[i+2][j] == '#' && str[i+1][j-1] == '#'
                   && str[i+1][j+1] == '#')
                {
                    str[i][j] = '.';
                    str[i+1][j] = '.';
                    str[i+2][j] = '.';
                    str[i+1][j-1] = '.';
                    str[i+1][j+1] = '.';
                }
                else flag = 1;
            }
        }
    }

    if(!flag) printf("YES\n");
    else printf("NO\n");

    return 0;
}
