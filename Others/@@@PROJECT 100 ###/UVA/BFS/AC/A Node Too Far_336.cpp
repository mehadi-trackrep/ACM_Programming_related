#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <queue>
using namespace std;    ///AC
#define max 50000

int TTL,root_node,cnt;
int level[max];

vector <int> graph[max];

void BFS(int SN)
{
    int visited[max] = {0};
    visited[SN] = 1;
    level[SN] = 0;
    queue <int> q;
    q.push(SN);
    cnt = 1;

    while(!q.empty()){

        int u = q.front();

        for(int i = 0;i < graph[u].size();i++){

            int v = graph[u][i];
            if(!visited[v]){
                visited[v] = 1;
                level[v] = level[u] + 1;
                q.push(v);
                if(level[v] <= TTL)
                    cnt++;
            }

        }

        q.pop();
    }
}

int main()
{
    int NC,c = 1; /// NC means Number of Connections
    while(scanf("%d",&NC) && NC != 0){
        set <int> st;
        st.clear();

        map<int,int>name;
        map<int,int>::iterator it;

        for(int i = 1;i <= NC;i++){

            int x,y;

            scanf("%d%d",&x,&y);

            name[x] = 1;
            name[y] = 1;

            graph[x].push_back(y);
            graph[y].push_back(x);

            st.insert(x);
            st.insert(y);
        }

        for(int i = 1;;i++){

            scanf("%d%d",&root_node,&TTL);

            if(root_node == 0 && TTL == 0){
                for(it = name.begin();it != name.end();it++){
                    int a = it->first;
                    graph[a].clear();
                }
                name.clear();
                break;
            }
            else{
                BFS(root_node);
                printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",c++,st.size()-cnt,root_node,TTL);
            }
        }
    }

    return 0;
}

/*

14
1 2  2 7  1 3  3 4  3 5  5 10  5 11
4 6  7 6  7 8  7 9  8 9  8  6  6 11
1 1  1 2  3 2  3 3  0 0

16
10 15  15 20  20 25  10 30  30 47  47 50  25 45  45 65
15 35  35 55  20 40  50 55  35 40  55 60  40 60  60 65
35  2 35 3  0 0

0

*/

