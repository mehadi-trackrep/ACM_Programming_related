#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas,c=1;

    cin >> tcas;
    getchar();

    string str;
    string str1;

    while(tcas--)
    {
        getline(cin,str);   ///AC
        getline(cin,str1);
        //cerr << "###: " << str << endl;
        //cerr << "###: " << str1 << endl;
        int len = str.length();
        int len1 = str1.length();

        map <char,int> mp;
        map <char,int> mp1;

        for(int i=0; i<len; i++)
        {
            if( (str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') )
            {
                if((str[i] >= 'A' && str[i] <= 'Z'))
                    mp[str[i]+32]++;
                else mp[str[i]]++;
            }
        }

        for(int i=0; i<len1; i++)
        {
            if( (str1[i] >= 'A' && str1[i] <= 'Z') || (str1[i] >= 'a' && str1[i] <= 'z') )
            {
                if((str1[i] >= 'A' && str1[i] <= 'Z'))
                    mp1[str1[i]+32]++;
                else mp1[str1[i]]++;
            }
        }

        if(mp.size() != mp1.size())
            printf("Case %d: No\n",c++);
        else
        {
            int ck=1;
            map <char,int> :: iterator it;
            map <char,int> :: iterator it1;

            for(it = mp.begin(),it1 = mp1.begin(); it!=mp.end(); it++,it1++)
            {
                int val = it->second,val1 = it1->second;
                char ch = it->first,ch1 = it1->first;

                if( val == val1 && ch == ch1 )
                    continue;
                else
                {
                    ck = 0;
                    break;
                }
            }

            if(ck == 1)
                printf("Case %d: Yes\n",c++);
            else
                printf("Case %d: No\n",c++);
        }

    }

    return 0;
}


/*


3
Tom Marvolo Riddle
I am Lord Voldemort
I am not Harry Potter
Hi Pretty Roar to man
Harry and Voldemort
Tom and Jerry and Harry


*/
