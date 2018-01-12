#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ara[100][100];
    while(cin >> n)
    {
        if(n == 0)
            break;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                scanf("%d",&ara[i][j]); ///AC
            }
        }
        int row = 0,x,y;
        for(int i=1; i<=n; i++)
        {
            int sum = 0;
            for(int j=1; j<=n; j++)
            {
                sum += ara[i][j];
            }
            if(sum & 1)
            {
                row++;
                x = i;
            }
        }
        int column = 0;
        for(int i=1; i<=n; i++)
        {
            int sum = 0;
            for(int j=1; j<=n; j++)
            {
                sum += ara[j][i];
            }
            if(sum & 1)
            {
                column++;
                y = i;
            }
        }

        if(row == 0 && column == 0)
            printf("OK\n");
        else if(row == 1 && column == 1)
            printf("Change bit (%d,%d)\n",x,y);
        else
            printf("Corrupt\n");

    }
    return 0;
}

/*

4
1 0 1 0
0 0 0 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 0 1 0
1 1 1 1
0 1 0 1
4
1 0 1 0
0 1 1 0
1 1 1 1
0 1 0 1
0

*/
