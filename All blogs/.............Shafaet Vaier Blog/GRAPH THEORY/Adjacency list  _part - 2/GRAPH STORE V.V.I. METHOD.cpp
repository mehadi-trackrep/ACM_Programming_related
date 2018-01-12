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
    vector <int> vec;
    for(i=1; i<=E; i++)
    {
        int x,y,z;
        scanf ("%d%d%d",&x,&y,&z);
        edges[x].push_back(y);
        edges[y].push_back(x);
        cost [x].push_back(z);  /// ekhettere sob edge er cost 1 mone kore,..
        cost [y].push_back(z);
    }

    return 0;
}
