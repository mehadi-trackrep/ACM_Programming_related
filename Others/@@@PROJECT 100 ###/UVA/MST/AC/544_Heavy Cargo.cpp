#include <bits/stdc++.h>
using namespace std;
#define M 2100

struct edge
{
    int u,v,w;
    bool operator < (const edge &p)const
    {
        return (w > p.w); /// means big weight(w) gula first a rakhbe...
    }
};

int total_city,total_road,w;    ///total_city->Vertex,total_road->Edge...
vector <edge> e;
vector <int> graph[M];

int parent[M];
int weight[M][M];
int par[M];
static int start,terminal;  /// static use na korle src = M hocce kano ???

void bfs(int src)
{
    int u,i,v ;
    queue <int> q ;
    
    q.push(src);
    
    int visited[M] = {0};
    visited[src] = 1;
    parent[src] = src;
    
    while(!q.empty())
    {
        u = q.front();
        
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i];
            
            if(!visited[v])
            {
                parent[v] = u ;
                visited[v] =  1 ;
                q.push(v) ;
                if(v == terminal)
                    return ;
            }
        }
        q.pop();
    }
}

void makeset()
{
    for(int i=1; i<=M ;i++)
        par[i] = i;
}

int find_set(int r)
{
    if(r == par[r])
        return r;
    return par[r] = find_set(par[r]);
}

void MST()
{
    sort(e.begin(),e.end());
    makeset();
    int count = 0;
    for(int i=0; i<e.size(); i++)
    {
        int u,v,w;
        u = e[i].u;
        v = e[i].v;
        w = e[i].w;
        int x,y;
        x = find_set(u);
        y = find_set(v);
        if(x != y){
            count++;
            graph[u].push_back(v);
            graph[v].push_back(u);
            
            weight[u][v] = w;
            weight[v][u] = w;
            //printf("check: %d %d %d\n",u,v,w);
            par[x] = y;
            if(count == total_city-1)
                break;
        }
    }
}

int main()
{
    string city1,city2,start_city,end_city;
    int c=1;

    while(scanf("%d%d",&total_city,&total_road)==2)
    {

        if(total_city == 0 && total_road == 0)
            break;
        
        map <string,int> mp;
        int x=1;
        
        e.clear();
        mp.clear();
        for(int i=1; i<=total_city; i++)
            graph[i].clear();
        
        for(int i=1; i<=total_road ;i++)
        {
            cin >> city1 >> city2 >> w;
            if(mp[city1] == 0)
                mp[city1] = x++;
            if(mp[city2] == 0)
                mp[city2] = x++;
                
            edge get;
            
            get.u = mp[city1];
            get.v = mp[city2];
            get.w = w;
            
            e.push_back(get);
        }
        
        cin >> start_city >> end_city;
        
        start = mp[start_city];
        terminal = mp[end_city];
        
        //cerr << "###" << start << ' ' << terminal << endl;
        
        MST();

        bfs(start);
        int max_weight = 20000,u,v;
        printf("Scenario #%d\n",c++);
        while(1)
        {
            u = terminal;
            v = parent[terminal];
            if(weight[u][v] < max_weight)
                max_weight = weight[u][v];
            terminal = v;
            if(v == start)
            {
                if(weight[u][v] < max_weight)
                    max_weight = weight[u][v];
                printf("%d tons\n\n",max_weight);
                break;
            }
        }
        
        //printf("parent of terminal: %d\n",parent[terminal]);
        
//        printf("The Edge List: \n");
//        for(int i=0; i<e.size(); i++)
//        {
//            cout << e[i].u << ' ' << e[i].v << ' ' << e[i].w << endl;
//        }
    }
    
    return 0;
}

/*

4 3
Karlsruhe Stuttgart 100
Stuttgart Ulm 80
Ulm Muenchen 120
Karlsruhe Muenchen
5 5
Karlsruhe Stuttgart 100
Stuttgart Ulm 80
Ulm Muenchen 120
Karlsruhe Hamburg 220
Hamburg Muenchen 170
Karlsruhe Stuttgart
5 5
Karlsruhe Stuttgart 100
Stuttgart Ulm 80
Ulm Muenchen 120
Karlsruhe Hamburg 220
Hamburg Muenchen 170
Muenchen Karlsruhe
0 0

*/
