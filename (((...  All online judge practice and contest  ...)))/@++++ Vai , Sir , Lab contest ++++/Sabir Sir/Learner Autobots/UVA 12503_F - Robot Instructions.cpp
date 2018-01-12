#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tcas,n;
    cin >> tcas;
    while(tcas--)
    {
        cin >> n;
        getchar();
        char str[100][15];  ///AC
        int x=0;
        for(int i=1; i<=n ; i++)
        {
            gets(str[i]);
            if(str[i][0] == 'L')
            {
                x--;
            }
            else if(str[i][0] == 'R')
            {
                x++;
            }
            else
            {
                int len = strlen(str[i]);
                int p = 0,sum=0;
                for(int j=len-1; j>=0; j--)
                {
                    if(str[i][j] >= '0' && str[i][j] <= '9')
                    {
                        sum += (str[i][j] - '0')*(int)pow((double)10,(double)p);
                        p++;
                    }
                    else
                        break;
                }
                //cerr << "###" << sum << endl;
                if(p == 3)
                    sum = 100;
                if(str[sum][0] == 'L')
                {
                    x--;
                    strcpy(str[i],"LEFT");
                }
                else if(str[sum][0] == 'R')
                {
                    x++;
                    strcpy(str[i],"RIGHT");
                }

            }
        }
        printf("%d\n",x);
    }
    return 0;
}

/*

4
3
LEFT
RIGHT
SAME AS 2
5
LEFT
SAME AS 1
SAME AS 2
SAME AS 1
SAME AS 4
5
LEFT
RIGHT
SAME AS 2
SAME AS 2
SAME AS 1
13
RIGHT
LEFT
SAME AS 1
SAME AS 2
SAME AS 1
SAME AS 4
RIGHT
LEFT
RIGHT
LEFT
RIGHT
RIGHT
SAME AS 12


*/
