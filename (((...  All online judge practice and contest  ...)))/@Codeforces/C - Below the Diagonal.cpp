#include <bits/stdc++.h>
using namespace std;
//int ara[1000][1000];
struct data{
    int x,y;
}X[1000];

int main()
{
    int n;
    int ck = 0;
    int x,y;
    int cnt=0;
    for(int i=1; i<=n-1; i++)
    {
        scanf("%d %d",&x,&y);
        if(x > y)
        {
            cnt++;
        }
        X[i].x = x;
        X[i].y = y;
    }
    if(cnt == n-1) printf("0\n");
    else
    {

    }
    return 0;
}
