
        /// adjacency list store
    /// example :
/*  6 8 //node-edge
    x-y:
    1 2 //node1-node2
    1 4
    2 4
    2 5
    4 5
    5 3
    3 6
    6 6*/


#include<cstdio>
#include<vector>
using namespace std;
#define MAX 100000 //maximum node
vector<int>edges[MAX];
vector<int>cost[MAX]; //parallel vector to store costs;
int main()
{
int N,E,i;

scanf("%d%d",&N,&E);
for(i=1;i<=E;i++)
{
int x,y;
scanf("%d%d",&x,&y);
edges[x].push_back(y);
edges[y].push_back(x);
cost[x].push_back(1);
cost[y].push_back(1);
}
return 0;
}

