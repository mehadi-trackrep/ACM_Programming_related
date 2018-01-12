#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;
#define MAX 100000 /// maximum node
vector<int>edges[MAX];
vector<int>cost [MAX]; ///parallel vector to store costs;
int main()
{
    int N,E,i;  /// N = NODE and E = EDGE
    scanf ("%d%d",&N,&E);
    for(i=1; i<=E; i++)
    {
        int x,y;
        scanf ("%d%d",&x,&y);
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost [x].push_back(1);  /// ekhettere sob edge er cost 1 mone kore,..
        cost [y].push_back(1);
    }
    return 0;
}
