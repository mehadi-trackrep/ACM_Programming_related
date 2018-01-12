#include<bits/stdc++.h>
using namespace std;

int v[30];
void init()
{
    int i,t,j,d[30];    ///AC
    d[0]=v[0]=0;
    d[1]=v[1]=1;
    t=1;
    for(i=2; i<30; i++)
    {
        v[i]=d[i]=1+t;
        for(j=i-2; j>=0; j-=2)
        {
            v[i]+=d[j];
        }
        t+=d[i];
    }
}
int main()
{
    int n,t;
    init();
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        printf("%d\n",v[n]);
    }
    return 0;
}
