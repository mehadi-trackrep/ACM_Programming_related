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

        int T[26];
        memset(T,0,sizeof(T));

        for(int i=0; i<len; i++)
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                int ind = str[i] - 'A'; /// indexing...
                T[ind]++;
            }
            else if(str[i] >= 'a' && str[i] <= 'z')
            {
                int ind = str[i] - 'a'; /// indexing...
                T[ind]++;
            }
        }

        bool flag = true;

        for(int i=0; i<len1; i++)
        {
            if(str1[i] >= 'A' && str1[i] <= 'Z')
            {
                int ind = str1[i] - 'A'; /// indexing...
                if(T[ind] == 0)
                {
                    flag = false;
                    break;
                }
                T[ind]--; /// er jonno , first loop er jonno , if T[0] ==  2 hoy , toble second loop a ... T[0] er man exact 2 na holy T[ind] == 0 check a
                /// flag = false hoye jabe...
            }
            else if(str1[i] >= 'a' && str1[i] <= 'z')
            {
                int ind = str1[i] - 'a'; /// indexing...
                if(T[ind] == 0)
                {
                    flag = false;
                    break;
                }
                T[ind]--; /// age check , tarpor decrement(--) , ejonno T[ind] er value first loop er value theke small or big holei flag = false hobe...
            }
        }

        if(flag) printf("Case %d: Yes\n",c++);
        else printf("Case %d: No\n",c++);
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

