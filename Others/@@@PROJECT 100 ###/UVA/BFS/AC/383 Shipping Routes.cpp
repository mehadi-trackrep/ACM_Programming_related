// BFS
#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <map>
#include <string>
#include <cstring>

using namespace std ;

vector<int>graph[100];
int n , level[100];

void bfs(int src)
{
    int u , i , v ;
    queue<int>q ;
    q.push(src);
    int visited[100] = {0};
    visited[src] = 1 ;
    level[src] = 0 ;

    while(!q.empty())
    {
        u = q.front();
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i] ;

            if(!visited[v])
            {
                level[v] = level[u] + 1 ;
                visited[v] =  1 ;
                q.push(v) ;
            }
        }
        q.pop();
    }

}

int main()
{
    int data_set,ware_houses,legs,query; /// ware_houses means N,legs means edge
    int c = 1;
    string str;
    
    scanf("%d",&data_set);
    
    printf("SHIPPING ROUTES OUTPUT\n");
    
    while(data_set--)
    {
        map <string,int> mp;
        scanf("%d%d%d",&ware_houses,&legs,&query);    
        
        int x = 1;
        
        for(int i=1; i<=ware_houses; i++)
        {
            cin >> str;
            getchar();
            if(mp[str] <= 0)
                mp[str] = x++;
            
        }
        
        for(int i=1; i<=legs; i++)
        {
            string str1,str2;
            
            cin >> str1;
            getchar();
            cin >> str2;
            getchar();
            
            graph[mp[str1]].push_back(mp[str2]);
            graph[mp[str2]].push_back(mp[str1]);
        }
        
        printf("\nDATA SET  %d\n\n",c++);
        
        for(int i=1; i<=query; i++)
        {
            string str1,str2;
            int sz;
            
            cin >> sz;
            getchar();
            cin >> str1;
            getchar();
            cin >> str2;
            if(i != query)
                getchar();
            
            int src = mp[str1],ck = mp[str2];
            
            memset(level,0,sizeof(level));
            
            bfs(src);
            
            if(level[ck] == 0)
                printf("NO SHIPMENT POSSIBLE\n");
            else 
            {
                printf("$%d\n",level[ck]*sz*100);
            }
            
        }
        
        for(int i=1; i<x; i++)
        {
            graph[i].clear();
        }
        
    }
    
    printf("\nEND OF OUTPUT\n");

    return 0 ;
}
/*

2
6 7 5
AA CC QR FF DD AB
AA CC
CC QR
DD CC
AA DD
AA AB
DD QR
AB DD
5 AA AB
14 DD CC
1 CC DD
2 AA FF
13 AB QR
3 0 1
AA AB CC
5 AA CC

*/
