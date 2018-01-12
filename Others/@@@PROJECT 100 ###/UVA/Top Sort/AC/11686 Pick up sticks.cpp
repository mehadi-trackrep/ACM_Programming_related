#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define clr(a) memset(a,0,sizeof(a))
#define full(a) memset(a,63,sizeof(a))      ///AC

vector < int > vec[1000000];
vector < int > vec2;

int deg[1000000];
int N,E;

void bfs()
{
    int i,j,k;
    queue < int > q;
    for(i=1; i<=N; i++)
    {
        if(!deg[i])
            q.push(i);
    }
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        for(i=0; i<vec[temp].size(); i++)
        {
            int now = vec[temp][i];
            deg[now]--;
            if(!deg[now])
                q.push(now);
        }
        vec2.pb(temp);
    }
}

int main()
{

    while(scanf("%d%d",&N,&E) == 2)
    {
        if(N == 0 && E == 0) break;

        for(int i=0; i<=N; i++)
        {
            vec[i].clear();
            deg[i]=0;
        }

        while(E--)
        {
            int u,v;

            scanf("%d%d",&u,&v);

            vec[u].pb(v);

            deg[v]++;
        }

        while(!vec2.empty()) vec2.clear();

        bfs();

        if(vec2.size() != N) printf("IMPOSSIBLE\n");
        else
        {
            for(int i=0; i<vec2.size(); i++)
            {
                if(i < vec2.size()-1)
                    cout << vec2[i] << ' ';
                else
                    cout << vec2[i] << endl;
            }
        }
    }

    return 0;
}

/*


6 8
1 2
1 3
2 3
2 4
3 4
3 5
5 6
4 6


5 4
1 2
2 3
1 3
1 5


*/

