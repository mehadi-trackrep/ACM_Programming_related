#include <bits/stdc++.h>
using namespace std;
#define max 100
struct edges{
    int u,v,w;
    bool operator < (const edges& other) const{
        return w < other.w; /// other er weight(w) er chye edges er
                            /// weight(w) choto

    }
};

int main()
{
    vector <edges> e;
    int N,E;
    cin >> N >> E;

    for(int i = 1;i <= E;i++){
        int u,v,w;
        cin >> u >> v >> w;
        edges get;
        get.u = u;
        get.v = v;
        get.w = w;
        e.push_back(get);   /// e ekti structure type er vector,so only
                            /// structure variable er ekta ekta value ei
                            /// vector a push kora jabe...
    }

    sort(e.begin(),e.end());
    cout << "\n\n";
    for(int i = 0;i < (int)e.size();i++){
        int u = e[i].u;
        int v = e[i].v;
        int w = e[i].w;
        printf("%d %d %d\n",u,v,w);
    }

    return 0;
}

/*
9 7
1 2 16
2 3 12
3 4 11
4 5 15
2 6 13
6 7 14
8 9 10
*/
