#include <bits/stdc++.h>
using namespace std;

struct data
{
    int len;
    string str;
    bool operator < (const data &p)const    /// running...
    {
        return len < p.len;
    }
};

vector <data> v;

int main()
{
    string str;

    while(cin >> str)
    {
        if(str == "9")
        {
            //v.clear();
            break;
        }

        int len = str.length();

        data get;

        get.len = len;
        get.str = str;

        v.push_back(get);
    }

    vector <data> :: iterator it;
    vector <data> :: iterator it1;
    int ck;
    for(it = v.begin(); it!=v.end(); it++)
    {
        ck = 1;
        data get = *it;

        string str = get.str;
        int len = get.len;

        for(it1 = it+1; it1 != v.end(); it1++)
        {
            data get1 = *it1;
            string str1 = get1.str;
            int len1 = get1.len;
            int ck1 = 1;
            for(int i=0; i<len; i++)
            {
                if(str[i] != str1[i])
                {
                    ck1 = 0;
                    break;
                }
            }
            if(ck1 == 1)
            {
                break;
            }
        }
        if(ck1 != 1)
            continue;
        else
        {
            break;
        }
    }
    if(ck == 1)
        printf("Set %d is immediately decodable\n",)
    return 0;
}
