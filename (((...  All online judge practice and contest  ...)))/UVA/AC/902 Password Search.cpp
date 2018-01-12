#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    int sz;

    while(scanf("%d",&sz) == 1)     ///AC
    {
        cin >> str;
        int len = str.length();
        char sub_str[15];

        map <string,int> mp;
        vector <string> vec;

        mp.clear();
        vec.clear();

        //cerr << "### sz and len: " << sz << ' ' << len << endl;
        //cerr << "### str: " << str << endl;

        for(int i=0; i<=len-sz; i++)
        {
            int k=0;
            for(int j=i; j<(sz+i); j++) sub_str[k++] = str[j];
                //cerr << "check: " << str[j] << endl;
            sub_str[k] = '\0';
            mp[sub_str]++;
            vec.push_back(sub_str);
        }

        string pass;
        int Max = 0;

        for(int i=0; i<vec.size(); i++)
        {
            string key = vec[i];
            //cerr << "---<> key: and mapped value: " << key << ' ' << mp[key] << endl;
            if(mp[key] > Max)
            {
                pass = key;
                Max = mp[key];
            }
        }

        cout << pass << endl;
    }

}

/*


3 baababacb


*/
