#include <bits/stdc++.h>
using namespace std;

#define pb	        push_back
#define pf          printf
/// Function short form ...
#define mem(a,x) memset(a,x,sizeof(a))
#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define pf1(a)                printf("%d\n", a)
#define pf2(a,b)              printf("%d %d\n",a,b)
/// loop short form ...
#define loop_tc(tc)            	 for(int cas=1; cas<=tc; cas++)	   	/// V.V.I.
#define fi(i,a,b)           for(int i=a; i<b; i++)

vector <int> graph[110];
int visit[110],cnt;

void dfs(int src)
{
    for(int i=0; i<graph[src].size(); i++)
    {
        int v = graph[src][i];
        if(!visit[v])
        {
            cnt++;
            visit[v] = 1;
            dfs(v);
        }
    }
}

int main()
{
    int n;
    while(sf1(n) and n)
    {
        int u,v;
        while(sf1(u) and u)
        {
            while(sf1(v) and v) graph[u].pb(v);
        }
        int q,rt;
        sf1(q);
        while(q--)
        {
            sf1(rt); cnt=0;
            mem(visit,0);
            dfs(rt);
            //cnt -= n; cnt = abs(cnt); ck = 0; //deb(-1);
            cnt = n-cnt;
            pf("%d",cnt);
            for(int i=1; i<=n; i++)
            {
                if(!visit[i]) pf(" %d",i);
            }
            pf("\n"); //deb(-1);
        }
        for(int i=0; i<=n; i++) graph[i].clear();
    }
	return 0;
}


