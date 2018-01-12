#include <bits/stdc++.h>
using namespace std;

string str;
int len;

void solve()
{
    int palin = 1;
    int small = 0;

    for(int i=0; i<=len/2; i++)
    {
        if(str[i] != str[len-i-1])
        {
            if(str[len-i-1] > str[i]) small = 1;
            str[len-i-1] = str[i];
            palin = 0;

        }
    }

    if(small == 0 && palin == 0)
    {
        cout << str << endl;
        return ;
    }

    if(palin == 1)
    {
        int ck = 1; /// sob koti 9 kina....... check ? , dhori sob 9
        for(int i=(len-1)/2; i>=0; i--)
        {
            if(str[i] != '9')
            {
                str[i] += 1;
                str[len-i-1] = str[i];
                ck = 0;
                break;
            }
            else
            {
                str[i] = '0';
                str[len-i-1] = str[i];
            }
        }

        if(ck == 1)
        {
            printf("1");
            for(int i=1; i<=len-1; i++) printf("0");
            //cout << str ;
            printf("1\n");
            return ;
        }
        else
        {
            cout << str << endl;
            return ;
        }
    }

    if(small == 1)
    {
        for(int i=(len-1)/2; i>=0; i--)
        {
            if(str[i] == '9')
            {
                str[i] = '0';
                str[len-i-1] = str[i];
            }
            else
            {
                str[i] += 1;
                str[len-i-1] = str[i];
                break;
            }
        }

        cout << str << endl;

        return;
    }
}

int main()
{
    int n;

    cin >> n;

    freopen("out.txt","w",stdout);

    for(int i=1; i<=n; i++)
    {
        cin >> str;
        len = str.length();
        printf("Case %d: ",i);
        solve();
    }
}
