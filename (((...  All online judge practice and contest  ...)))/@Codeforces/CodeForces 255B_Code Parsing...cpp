#include <bits/stdc++.h>
using namespace std;
char str[1000005];
int main()
{
    int len;
    gets(str);
    len = strlen(str);
    int ck = 0;
    char ch;

    while(1)
    {
        for(int i=0; i<len; i++)
        {
            if(str[i] == 'y')
            {

                if(i+1 < len && str[i+1] == 'x')
                {
                    //cerr << "check:...1 " << str << endl;
                    str[i] = 'x';
                    str[i+1] = 'y';
                    ck = 1;
                    i = 0;
                }
            }
        }

        for(int i=0; i<len; i++)
        {
            if(str[i] == 'x')
            {

                if(i+1 < len && str[i+1] == 'y')
                {
                    //cerr << "check:...2 " << str << endl;
                    int k=i;
                    for(int j=i+2; j<len; j++)
                    {
                        str[k++] = str[j];
                    }
                    str[len-2] = '\0';
                    i = 0;
                    len -= 2;
                    ck = 1;
                }
            }
        }

        if(ck == 1)
            ck = 0;
        else
            break;
    }

    cout << str << endl;

    return 0;
}

/*

yxyxy

*/

