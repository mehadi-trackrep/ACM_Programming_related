#include <bits/stdc++.h>
using namespace std;

int main()
{
    int total;
    char ch;
    while(cin >> total)
    {
        getchar();
        if(total == 0) break;   ///AC

        map <char,int> mp;
        stack <char> st;
        int cnt=0;

        string str;

        getline(cin,str);

        int len = str.length();

        int ara[1000];

        memset(ara,0,sizeof(ara));

        for(int i=0; i<len; i++)
        {
            ch = str[i];

            mp[ch]++;

            if(mp[ch] == 2){
                if(ara[ch-'A'] == 1 && st.size() <= total && st.size() >=1) st.pop();
            }

            else if(mp[ch] == 1)
            {
                if(st.size() < total)
                {
                    st.push(ch);
                    ara[ch-'A'] = 1;
                }
                else cnt++;
            }
        }

        if(cnt == 0) printf("All customers tanned successfully.\n");
        else printf("%d customer(s) walked away.\n",cnt);
    }

    return 0;
}

/*

2 ABBAJJKZKZ
3 GACCBDDBAGEE
3 GACCBGDDBAEE
1 ABCBCA
0

*/
