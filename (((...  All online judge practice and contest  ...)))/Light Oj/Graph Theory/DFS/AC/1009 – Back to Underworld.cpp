#include <bits/stdc++.h>
using namespace std ;
#define MAX 100005
vector <int> graph[MAX];
char colour[MAX];
int e,vampires = 0,lykans = 0; /// e means edge/dual fight
int visited[MAX];

void bfs(int src)
{
    int u , i , v ;
    queue<int>q ;
    q.push(src);
    colour[src] = 'V';
    vampires++;
    //visited[MAX] = {0};
    visited[src] = 1 ;

    while(!q.empty())
    {
        u = q.front();
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i] ;

            if(!visited[v])
            {
                if(colour[u] == 'V'){
                    colour[v] = 'L';
                    lykans++;
                }
                if(colour[u] == 'L'){
                    colour[v] = 'V';
                    vampires++;
                }

                visited[v] =  1 ;
                q.push(v) ;
            }
        }

        q.pop();
        graph[u].clear();
    }

}

int main()
{
    int i , j , x , y ,total,t,c = 1;

    scanf("%d",&t);

    while(t--){

        scanf("%d",&e);

        set <int> st;

        for(i=0 ; i<e ; i++)
        {
            scanf("%d %d",&x,&y);
            graph[x].push_back(y);
            graph[y].push_back(x);
            st.insert(x);
            st.insert(y);
        }

        set <int> :: iterator it;
        total = 0;
        memset(visited,0,sizeof(visited));

        for(it = st.begin();it != st.end();it++){

            if(visited[*it] == 0){
                vampires = 0;
                lykans = 0;
                bfs(*it);
                total += max(vampires,lykans);

            }
        }
        st.clear();
        //printf("Vampers: %d , Lykans: %d and total nodes: %d\n",vampires,lykans,st.size());
        printf("Case %d: %d\n",c++,total);

    }

    return 0 ;
}
