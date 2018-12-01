#include <bits/stdc++.h>
using namespace std;

#define ll long long

vector<ll> graph[100005];
bool visited[100005];
ll cnt;

void dfs(ll src){
    if(visited[src]) return;
    visited[src] = true;
    cnt++;

    for(int i=0; i<graph[src].size(); i++){
        ll v=graph[src][i];
        if(!visited[v]) dfs(v);
    }

    return;
}

int main()
{
    ll n,p,a,b;
    cin >> n;
    cin >> p;

    for(int i=0; i<p; i++){
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    memset(visited, false, sizeof(visited));

    ll ans=0,sum=0;
    vector<ll> cnt_ara;

    for(int i=0; i<n; i++){
        if(!visited[i]){
            cnt=0;
            dfs(i);
            cnt_ara.push_back(cnt);
            //cerr << "cnt: " << cnt << endl;
        }
    }

    for(int i=0; i<cnt_ara.size(); i++){
        sum += cnt_ara[i];
        ans += (n-sum)*cnt_ara[i];
    }

    cout << ans << endl;

    return 0;
}

/**

100 70
0 11
2 4
2 95
3 48
4 85
4 95
5 67
5 83
5 42
6 76
9 31
9 22
9 55
10 61
10 38
11 96
11 41
12 60
12 69
14 80
14 99
14 46
15 42
15 75
16 87
16 71
18 99
18 44
19 26
19 59
19 60
20 89
21 69
22 96
22 60
23 88
24 73
27 29
30 32
31 62
32 71
33 43
33 47
35 51
35 75
37 89
37 95
38 83
39 53
41 84
42 76
44 85
45 47
46 65
47 49
47 94
50 55
51 99
53 99
56 78
66 99
71 78
73 98
76 88
78 97
80 90
83 95
85 92
88 99
88 94


**/
