    ///input:
/*
3 3
1 2
1 3
2 3

6 8
1 2
1 4
2 4
2 5
4 5
5 3
3 6
6 6
*/
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
    }
    cout << '\n';
    ///node 1 er sathe koy ta node connected tar list :-
    int size = edges[1].size();
    for(int i=0; i < size ; i++)
        printf("%d ",edges[1][i]);

    return 0;
}
