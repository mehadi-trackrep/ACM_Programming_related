#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1005];
bool vis[1005];
map<int,int> mp;

int node_cnt,sum;

void dfs(int src){
    //cerr << "F-sum: " << sum << endl;
    if(vis[src]) return;
    vis[src] = 1;
    for(int i=0; i<graph[src].size(); i++){
        int v = graph[src][i];
        if(!vis[v]){
            sum += mp[v];
            node_cnt++;
            //cerr << "--> v: sum: " << v  << "  "  << sum << endl;
            dfs(v);
        }
    }
}

int main()   ///AC
{
    int tc;
    int n,m,a,u,v;
    cin >> tc;

    for(int c=1; c<=tc; c++){

        cin >> n >> m;

        for(int i=1; i<=n; i++) graph[i].clear();
        mp.clear();

        for(int i=1; i<=n; i++){
            cin >> a;
            mp[i] = a; /// money of ith person
        }

        for(int i=1; i<=m; i++){
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        memset(vis, 0 , sizeof(vis));
        int val,ck=1;

        for(int i=1; i<=n; i++){ /// i hocce node/person
            if(!vis[i]){
                node_cnt = 1;
                sum = mp[i];
                //cerr << " ==> sum: " << sum << endl;

                dfs(i);

                //cerr << "node_cnt , sum: " << node_cnt << " " << sum << endl;

                if(i>1){
                    if(sum%node_cnt != 0) {ck=0; break;}
                    else{
                        if((sum/node_cnt) != val) {ck=0; break;}
                    }
                }else{
                    if(sum%node_cnt != 0) {ck=0; break;}
                    else{
                        val = sum/node_cnt;
                    }
                }
            }
        }
        if(ck){
            printf("Case %d: Yes\n",c);
        }else{
            printf("Case %d: No\n",c);
        }

    }

    return 0;
}

/**

3
5 4
1 0 1 1 2
1 2
2 3
3 4
4 5
2 1
5 10
1 2
4 2
1 1 0 2
1 2
2 3

**/
