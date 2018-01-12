#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    scanf("%d%d",&n,&m);

   freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    if (n == m)
    {
        for(int i = 1; i <= m ; i ++) printf("BG");

        printf("\n");
    }

    else if(n>m )
    {
        for(int i = 1; i <= m ; i ++) printf("BG");
        int dif= n-m;
        for(int i=1; i<=dif; i++)  printf("B");
        printf("\n");
    }

    else if(m>n)
    {
        for (int i = 1; i <=n; i++)  printf("GB");

        int rif= m-n;
        for(int i=1; i<=rif; i++) printf("G");
        printf("\n");
    }
    return 0;
}


