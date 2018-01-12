#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    int ara[5];
    int i=0,sum=0;
    char str1[4][10];       ///127.12.0.15  string theke integer gula print kora...

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


    for(int j=0; j<4; j++) printf("%d\n",ara[j]);
    for(int j=0; j<4; j++) printf("\n%s\n",str1[j]);

    return 0;
}

/*

127.12.0.15

*/
