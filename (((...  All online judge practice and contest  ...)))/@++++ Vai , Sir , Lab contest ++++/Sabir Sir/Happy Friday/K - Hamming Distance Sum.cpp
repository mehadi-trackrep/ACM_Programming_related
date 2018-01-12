#include <bits/stdc++.h>
using namespace std;

int main()
{

    int len1,len2;

    string str1;
    string str2;

    cin >> str1 >> str2;

    len1 = str1.length();
    len2 = str2.length();

    if(len2 > len1)
    {
        map <string,int> mp;

        for(int i=0; (len2-i) >= len1; i++)
        {
            string str;
            int k = 0;

            for(int j=i; j<(len1+i); j++)
            {

                str[k++] = str2[j];
                //cerr << "==> str[k-1]: " << str[k-1] << endl;
            }

            cerr << "--> k: " << k << endl;

            str[k] = '\0';

            cerr << "--> str: " << str << endl;

            mp[str]++;
        }

        map <string,int> :: iterator it;

        int sum = 0;

        for(it = mp.begin(); it!=mp.end(); it++)
        {
            int s = 0;

            string ck_str = it->first;
            int val = it->second;

            //cerr << "ck_str: " << ck_str << endl;

            for(int i=0; i<len1; i++)
            {
                s += abs((str1[i]-'0') - (ck_str[i]-'0'));
            }

            sum += (s*val);
        }

        printf("%d\n",sum);

    }
    else
    {
        int sum = 0;

        for(int i=0; i<len1; i++)
        {
            sum += abs((str1[i]-'0') - (str2[i]-'0'));
        }

        printf("%d\n",sum);
    }

    return 0;

}
