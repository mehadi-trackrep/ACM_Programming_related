#include <bits/stdc++.h>
using namespace std;

char x[100];
char y[100];
int c[105][105];
char b[105][105];

void print_lcs(int i,int j)
{
    if(i == 0 || j == 0) return;
    if(b[i][j] == 'c')
    {
        print_lcs(i-1,j-1);
        printf("%c",x[i-1]);
    }
    else if(b[i][j] == 'u')
        print_lcs(i-1,j);
    else
        print_lcs(i,j-1);
}

void lcs()
{
    int m,n;

    m = strlen(x);
    n = strlen(y);

    for(int i=0; i<=m; i++) c[i][0] = 0;
    for(int i=0; i<=n; i++) c[0][i] = 0;

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(x[i-1] == y[i-1])
            {
                c[i][j] = c[i-1][j-1] + 1;
                b[i][j] = 'c';
            }
            else if(c[i-1][j] >= c[i][j-1])
            {
                c[i][j] = c[i-1][j];
                b[i][j] = 'u';
            }
            else
            {
                c[i][j] = c[i][j-1];
                b[i][j] = 'l';
            }
        }
    }

    print_lcs(m,n);
}


int main()
{
    gets(x);
    gets(y);
    lcs();

    return 0;
}


/*

CBACDBBACBA
CBABACDBC

*/
