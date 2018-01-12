#include<bits/stdc++.h>
#define M 10000000
using namespace std;
int p[M],q[M];
int main()
{
    int i,m,n,cnt;
    while(scanf("%d %d",&m,&n)==2)
    {
        cnt=0;
        if(n==0 && m==0)break;
        for(i=0; i<m; i++)scanf("%d",&p[i]);
        for(i=0; i<n; i++)scanf("%d",&q[i]);
        for(i=0; i<n; i++)
        {
            if(p[i]==q[i])
                cnt++;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

/*

3 4
1 2 3
2 3 4 5
0 0

5 4
1 2 3 4 5
2 3 4 5
0 0

*/