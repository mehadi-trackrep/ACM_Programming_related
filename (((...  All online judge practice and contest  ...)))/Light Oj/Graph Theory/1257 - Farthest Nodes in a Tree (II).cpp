#include <bits/stdc++.h>
using namespace std;

struct edge{
    int v,w;
};

vector<edge> graph[30005];
int n;

int bfs(int src){

}

int main(){

    int tc;

    cin >> tc;

    edge var;
    int u;

    for(int c=1; c<=tc; c++){
        cin >> n;
        for(int i=1; i<n; i++){
            cin >> u >> var.v >> var.w;
            //cout << var.u << " " << var.v << " " << var.w << endl;
            graph[u].push_back(var);
            var.v = u;
            graph[u].push_back(var);
        }
    }

    return 0;
}
