/*
#include <cstdio>
#include <iostream>
#include <vector>
*/
#include <bits/stdc++.h>
using namespace std;
#define MAX 100000 /// maximum node
vector<int>edges[MAX];
int main()
{
    int N,E,n1,n2;
    ///input neya:
    cin >> N >> E;
    for(int i = 0;i < E;i++){
        cin >> n1 >> n2;
        edges[n1].push_back(n2);
    }
    ///(i):
    cout << "\n\nThe adjacency list is:\n\n";

    int x = 1;
    while(x <= N){
        int size = edges[x].size();
        cout << x << '\t' ;
        for(int i = 0;i < size;i++){
            if(i == size-1)
                cout << edges[x][i];
            else
                cout << edges[x][i] << ',';
        }
        cout << '\n';
        x++;
    }

    ///(ii):
    cout << "\n\n";
    x = 1;
    while(x <= N){
        int size = edges[x].size();
        cout << x << " node er sathe connected node :" << size << " ti => ";
        for(int i = 0;i < size;i++){
            if(i == size-1)
                cout << edges[x][i];
            else
                cout << edges[x][i] << ',';
        }
        cout << '\n';
        x++;
    }
    ///(iii):
    int indegree[N+1],outdegree[N+1];

    memset(indegree,0,sizeof(indegree));

    x = 1;
    while(x <= N){
        int size = edges[x].size();
        outdegree[x] = size;
        for(int i = 0;i < size;i++){
            indegree[edges[x][i]] += 1;
        }
        x++;
    }

    cout << "\n\n";
    for(int i = 0;i < N;i++){
        cout << i+1 << " node er indegree : " << indegree[i+1] << " and outdegree : " << outdegree[i+1] << endl;
    }

    return 0;
}

/// input:
/*
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
