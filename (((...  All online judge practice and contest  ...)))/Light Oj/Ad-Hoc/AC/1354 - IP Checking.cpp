#include <bits/stdc++.h>
using namespace std;

char str[15];

void dec_to_bi(int n)
{
    int i=0;
    while(n > 0)
    {
        str[i++] = (n%2)+'0';   ///AC
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
    int tcas;
    int c=1;

    cin >> tcas;
    getchar();

    while(tcas--)
    {

        char ch;
        int ara[5];
        int i=0,sum=0;

        char str1[4][10];

        while(1)
        {
            scanf("%c",&ch);

            if(ch != '.' && ch != '\n')
            {
                sum = sum*10 + (ch-'0');
            }
            else
            {
                ara[i++] = sum;
                sum = 0;
            }

            if(ch == '\n')
                break;
        }
        i = 0;
        int j = 0;
        while(1)
        {
            scanf("%c",&ch);

            if(ch != '.' && ch != '\n')
            {
                str1[i][j++] = ch;
            }
            else
            {
                str1[i][j] = '\0';
                i++;
                j = 0;
            }

            if(ch == '\n')
                break;
        }
        int ck=1;
        for(int j=0; j<4; j++)
        {
            dec_to_bi(ara[j]);

            //cerr << "###: " << str << endl;
            //cerr << "***: " << str1[j] << endl;

            if(strcmp(str,str1[j]) == 0)
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

    return 0;
}
