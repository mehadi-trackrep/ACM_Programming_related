#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    while(1)
    {
        getline(cin,str);
        if(str == "*") break;
        int len = str.length();
        char ch;
        ch = str[0];
        if(ch >= 'A' && ch <= 'Z') ch = str[0] + ' ';   ///AC
        int ck=1;
        for(int i=1; i<len; i++)
        {
            if(str[i] == ' ')
            {
                if(str[i+1] >= 'A' && str[i+1] <= 'Z') str[i+1] = str[i+1] + ' ';
                if(str[i+1] != ch)
                {
                    ck = 0;
                    break;
                }
            }
        }
        if(ck == 1) printf("Y\n");
        else printf("N\n");
    }
    return 0;
}

/*

Flowers Flourish from France
Sam Simmonds speaks softly
Peter pIckEd pePPers
truly tautograms triumph
this is NOT a tautogram
*

*/


