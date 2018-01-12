#include <iostream>
#include <cstdio>
#include <cstring>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
using namespace std;
#define ll long long
#define ull unsigned long long

int main()
{
    int tcas;
    scanf("%d",&tcas);
    for(int cas=1; cas<=tcas; cas++)
    {
        int ara[101][101],a,ma,b,n,m,c,k,cn[101],cc;
        memset(cn,0,sizeof cn);

        scanf("%d%d",&n,&m);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                scanf("%d",&ara[i][j]);
            }
        }
        scanf("%d%d",&a,&b);
        for(int i=0; i<n; i++)
        {
            c=0;
            cc=0;
            ma=0;
            int j = 0;
            while(c<=b&&j<m)
            {
                if(ara[i][j]==0)c++;
                else cc++;
                j++;
            }
            ma=cc;
            c=0;
            cc=0;
            j=m-1;
            while(c<=b&&j>=0)
            {
                if(ara[i][j]==0)c++;
                else cc++;
                j--;
            }
            if(ma<cc)ma=cc;
            cn[i]=ma;
        }

        sort(cn,cn+n);

        reverse(cn,cn+n);

        int ans=0;

        for(i=0; i<a; i++)
            ans+=cn[i];
        printf("Case %d: %d\n",cs,ans);
    }
}

