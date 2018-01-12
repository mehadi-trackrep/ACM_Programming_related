#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int len = str.length();
    int ck = 1;
    for(int i=0; i<len; i++)
    {
        if(str[i] != '1' && str[i] != '4')
        {
            ck = 0;
            break;
        }
        if(str[i] == '4' && i-1 >= 0 && str[i-1] == '1' && i+1 < len && str[i+1] == '4')
        {
            i++;
        }
        else if(str[i] == '4' && i-1 >= 0 && str[i-1] == '1')
        {
            continue;
        }
        else if(str[i] == '1') continue;    ///AC
        else
        {
            ck = 0;
            break;
        }
    }

    if( ck == 1) printf("YES\n");
    else printf("NO\n");

    return 0;
}
