#include <bits/stdc++.h>
using namespace std;
int ara[100][100];
int main()
{
    int n;

    while(cin >> n)
    {

        int x = 0;

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++){
                if(i == j) ara[i][j] = 1;
                else ara[i][j] = x++;
            }
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++){
                if(j < n)
                    printf("%d ",ara[i][j]);
                else if(j == n) printf("%d",ara[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
