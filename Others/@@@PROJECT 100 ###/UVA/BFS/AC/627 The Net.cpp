#include <bits/stdc++.h>
using namespace std ;
#define M 310

vector<int>graph[M];
int parent[M];

void bfs(int src,int end_node)
{
    int u , i , v ;
    queue<int>q ;
    q.push(src);
    int visited[M] = {0};
    visited[src] = 1 ;
    parent[src] = src;
    while(!q.empty())
    {
        u = q.front();
        
        for(i=0 ; i<graph[u].size() ; i++)
        {
            v = graph[u][i] ;

            if(!visited[v])
            {
                parent[v] = u ;
                visited[v] =  1 ;
                q.push(v);
                if(v == end_node)
                    return ;
            }
        }
        q.pop();
    }

}

int main()
{
    int N,E;

    while(cin >> N)
    {
        string str;
        for(int i=1; i<=N; i++)
            graph[i].clear();
        for(int i=1; i<=N; i++)
        {
            cin >> str;
            int len = str.length(),j=0,root=0;
            while(str[j] != '-')
            {
                root = root*10 + (str[j]-'0');
                j++;
            }
            //printf("--->%d ",root);
            for(; j<len; j++)
            {
                int sum = 0;
                if(str[j] >= '0' && str[j] <= '9')
                {
                    while(str[j] >= '0' && str[j] <= '9' && j < len)
                    {
                        sum = sum*10 + (str[j]-'0');
                        j++;
                    }
                    
                    graph[root].push_back(sum);
                    //printf(" %d",sum);
                }
            }
            //cerr << endl;

        }

        cin >> E;
        
        for(int i=1; i<=E; i++)
        {
            int x,y;
            cin >> x >> y;
            
            if(i==1)
                printf("-----\n");
            
            memset(parent,0,sizeof parent);
            bfs(x,y);
            
            if(parent[y] == 0)
                printf("connection impossible\n");
            else
            {
                vector <int> store;
                store.clear();
                int ck = 1;
                store.push_back(y);
                while(1)
                {
                    y = parent[y];
                    
                    store.push_back(y);
                    if(y == x)
                        break;
                }
                reverse(store.begin(),store.end());
                vector <int> :: iterator it;
                for(it = store.begin(); it!=store.end(); it++)
                {
                    if(ck < store.size())
                        cout <<  *it << ' ';
                    else
                        cout <<  *it;
                    ck++;
                }
                cout << endl;   
            }
        }


    }

    return 0 ;
}
/*

6
1-2,3,4
2-1,3
3-1,2,5,6
4-1,5
5-3,4,6
6-3,5
6
1 6
1 5
2 4
2 5
3 6
2 1

10
1-2
2-
3-4
4-8
5-1
6-2
7-3,9
8-10
9-5,6,7
10-8
3
5 9
9 2
9 10

6
100-12,54
12-49,61
200-61,12,54
54-12,49
49-54,61
61-200,100,12
3
100 61
12 54
200 49

*/
