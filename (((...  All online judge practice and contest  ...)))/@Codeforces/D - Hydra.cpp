#include <bits/stdc++.h>
using namespace std;
#define M 100000

struct edge
{
    int u,v;
};

vector <int> indegree[M];
vector <edge> graph;

int main()
{
    int N,E,h,t;
    cin >> N >> E >> h >> t;
    for(int i=1; i<=E; i++)
    {
        int u,v;
        cin >> u >> v;

        indegree[u].push_back(v);
        //indegree[v].push_back(u);

        edge get;

        get.u = u;
        get.v = v;

        graph.push_back(get);
    }
    int ck=0;
    for(int i=0; i<graph.size(); i++)
    {
        int u,v;
        u = graph[i].u;
        v = graph[i].v;


        if(indegree[u].size() >= h && indegree[v].size() >= t)
        {

            printf("YES\n");
            printf("%d %d\n",u,v);
            int count = 0;
            for(int j=0; ; j++)
            {
                if(count==h-1)
                {
                    if(indegree[v][j] != u){
                        printf("%d",indegree[v][j]);
                        count++;
                    }
                }
                else
                {
                    if(indegree[v][j] != u){
                        printf("%d ",indegree[v][j]);
                        count++;
                    }
                }
                if(count == h)
                    break;
            }
            printf("\n");
            count = 0;
            for(int j=0; ; j++)
            {
                if(count==t-1)
                {
                    if(indegree[u][j] != v){
                        printf("%d",indegree[u][j]);
                        count++;
                    }
                }
                else
                {
                    if(indegree[u][j] != v){
                        printf("%d ",indegree[u][j]);
                        count++;
                    }
                }
                if(count == t)
                    break;
            }
            ck = 1;
            break;
            
        }
        else if(indegree[u].size() >= t && indegree[v].size() >= h)
        {

            printf("YES\n");
            printf("%d %d\n",v,u);
            int count = 0;
            for(int j=0; ; j++)
            {
                if(count==h-1)
                {
                    if(indegree[v][j] != u){
                        printf("%d",indegree[v][j]);
                        count++;
                    }
                }
                else
                {
                    if(indegree[v][j] != u){
                        printf("%d ",indegree[v][j]);
                        count++;
                    }
                }
                if(count == h)
                    break;
            }
            printf("\n");
            count = 0;
            for(int j=0; ; j++)
            {
                if(count==t-1)
                {
                    if(indegree[u][j] != v){
                        printf("%d",indegree[u][j]);
                        count++;
                    }
                }
                else
                {
                    if(indegree[u][j] != v){
                        printf("%d ",indegree[u][j]);
                        count++;
                    }
                }
                if(count == t)
                    break;
            }
            ck = 1;
            break;
        }

    }

    if(ck == 0)
        printf("NO\n");


    return 0;
}
/*

6 10 2 2
1 2
1 6
1 3
1 4
2 3
2 5
2 4
6 3
3 4
4 5

*/
