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
    cerr << "--->v: " << v << endl;
    top_sort.push_back(v);//}
}

int main()
{
    int u, v;
    int n, m;
    int degree[SIZ] = {0};

    scanf("%d", &n);
    scanf("%d", &m);
    while(m--)
    {
        scanf("%d %d", &u, &v);
        graph[u].push_back(v);

        degree[v] = 1;
    }
    int root;
    for(int i=1; i<=n; i++)
    {
        if(degree[i] == 0)
        {
            root = i;
            cerr << "-->check" << root << endl;
            break;
        }
    }

    dfs(root);

    printf("Top sort list - \n");

    reverse(top_sort.begin(),top_sort.end());

    vector <int> :: iterator it;

    for(it=top_sort.begin(); it!=top_sort.end(); it++)
    {
        cout << *it << endl;
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


3 4
1 2
2 2
3 1
3 2


*/
