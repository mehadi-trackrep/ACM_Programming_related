#include <bits/stdc++.h>
using namespace std;

char str[15];

void dec_to_bi(int n)
{
    int i=0;
    while(n > 0)
    {
        str[i++] = (n%2)+'0';
        n /= 2;
    }

    if(i < 8)
    {
        for(int j=i; j<8; j++)
        {
            str[j] = '0';
        }
    }

    for(int j=0; j<4; j++)
    {
        char temp;
        temp = str[j];
        str[j] = str[8-j-1];
        str[8-j-1] = temp;
    }

    str[8] = '\0';
}

int main()
{
    int t=4;
    while(t--)
    {
        int x;
        cin >> x;
        dec_to_bi(x);
        cout << str << endl;
    }

    return 0;
}
