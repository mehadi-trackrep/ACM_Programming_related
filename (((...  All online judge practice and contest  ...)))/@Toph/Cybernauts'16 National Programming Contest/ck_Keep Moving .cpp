#include<bits/stdc++.h>
using namespace std;
#define sz 150005
#define pii pair< pair<int,int>,int>



vector<int>vc[sz];
int ok;
struct node
{
    int win=0;
} ck[sz];
bool visit[sz];

void dfs(int v)
{
    visit[v]=1;
    if(vc[v].size()==0)
    {
        ck[v].win=0;
        return;
    }
    int w=0;
    for(int i=0; i<vc[v].size(); i++)
    {
        int u=vc[v][i];
        if(!visit[u])
        {
            dfs(u);
            if(ck[u].win==0) w=1;
        }
        else
        {
            if(ck[u].win==0) w=1;
        }
    }
    ck[v].win=w;
    cerr << "-->v and w: " << v << " " << w << endl;
}


int main()
{
    int t,n,m,u,v,x,i;
    scanf("%d",&t);
    for(int ca=1; ca<=t; ca++)
    {
        scanf("%d %d %d",&n,&m,&x);
        while(m--)
        {
            scanf("%d %d",&u,&v);
            vc[u].push_back(v);
        }
        ok=0;
        memset(visit,0,sizeof visit);
        dfs(x);
        if(ck[x].win==1) ok=1;
        if(ok) printf("Case %d: Yes\n",ca);
        else printf("Case %d: No\n",ca);
        for(i=1; i<=n; i++) vc[i].clear();
        for(i=1; i<=n; i++) ck[i].win=0;
    }
}
