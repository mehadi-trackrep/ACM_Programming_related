
// DFS vector
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

#define SIZ 1000

vector<int> graph[SIZ];
vector <int> top_sort;
char visit[SIZ];
int name[SIZ][SIZ];

void dfs(int v)
{
    if(visit[v]) return;
    visit[v] = 1;
    for(int i = 0; i<graph[v].size(); ++i)
    {
        dfs(graph[v][i]);
    }
    //cerr << "--->v: " << v << endl;
    top_sort.push_back(v);//}
}

int main()
{
    int u, v;
    int n, m;

    while(1){

        scanf("%d", &n);
        scanf("%d", &m);

        if(n == 0 && m == 0) break;

        int degree[SIZ] = {0};

        for(int i=0; i<=n-1; i++) graph[i].clear();

        top_sort.clear();

        while(m--)
        {
            scanf("%d %d", &u, &v);
            graph[u].push_back(v);

            degree[v] = 1;
        }
        int root;
        for(int i=0; i<=n-1; i++)
        {
            if(degree[i] == 0)
            {
                root = i;
                dfs(root);
            }
        }

        reverse(top_sort.begin(),top_sort.end());

        vector <int> :: iterator it;

        for(it=top_sort.begin(); it!=top_sort.end(); it++)
        {
            if(it<top_sort.end()-1)
                cout << *it << ' ';
            else
                cout << *it << endl;;
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
0 0

6 6
5 0
5 2
4 0
4 1
2 3
3 1
0 0


*/
