#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas;
    string str;
    cin >> tcas;
    getchar();
    while(tcas--)
    {
        getline(cin,str);
        int len = str.length(); ///AC

        for(int i=0; i<len; i++)
        {
            int x;
            x = i;
            int cnt = 1;
            if(x+1 < len && str[x] == str[x+1]){
                while(str[x] == str[++x])
                {
                    cnt++;
                }
                i = x-1;
            }
            printf("%d%c",cnt,str[i]);
        }

        printf("\n");
    }

    return 0;
}

/*


3
122344111
1111111111
12345

*/
