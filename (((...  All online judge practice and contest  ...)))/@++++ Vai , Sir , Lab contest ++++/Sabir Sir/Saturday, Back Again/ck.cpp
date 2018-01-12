//#include<cstdio>
//#include<sstream>
//#include<cstdlib>
//#include<cctype>
//#include<math.h>
//#include<algorithm>
//#include<set>
//#include<queue>
//#include<stack>
//#include<list>
//#include<iostream>
//#include<fstream>
//#include<numeric>
//#include<string>
//#include<vector>
//#include<cstring>
//#include<map>
//#include<iterator>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define db double
#define pi acos(-1)
#define pb push_back
#define ve (vc.begin(),vc.end())
#define mod 1000000007
#define m0 memset(a,0,sizeof(a))
#define ms memset(a,-1,sizeof(a))
#define mc memset(s,'0',sizeof(s))
#define mv memset(visit, o, sizeof(visit))
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()

map <string,int> mp;
map <int,string> mp1;
vector <int> vc[1000000];
int visit[1000010], parent[1000010], dist[1000010];

void bfs(int start)
{
    visit[start] = 1;
    dist[start] = 0;
    parent[start] = start;
    queue<int> q;
    q.push(start);
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0; i < vc[u].size(); i++)
        {
            int v = vc[u][i];
            if(!visit[v])
            {
                visit[v] = 1;
                dist[v] = dist[u]+1;
                parent[v] = u;
                q.push(v);
            }
        }
    }
}
int main()
{
    int n, cnt, f = 1;
    char s1[10], s2[10];
    while(sf("%d", &n) == 1)
    {
        if(f != 1)
        {
            pf("\n");
        }
        f++;
        cnt = 1;
        mp.clear();
        mp1.clear();
        for(int i = 0; i <= n; i++)
        {
            visit[i] = 0;
            parent[i] = 0;
            dist[i] = 0;
            vc[i].clear();
        }
        for(int i = 1; i < n; i++)
        {
            sf("%s %s", s1, s2);
            string a(s1), b(s2);
            if(!mp[a])
            {
                mp[a] = cnt;
                mp1[cnt] = a;
                cnt++;
            }
            if(!mp[b])
            {
                mp[b] = cnt;
                mp1[cnt] = b;
                cnt++;
            }
            vc[mp[a]].pb(mp[b]);
            vc[mp[b]].pb(mp[a]);
        }
        sf("%s %s", s1, s2);
        string a(s1), b(s2);
        bfs(mp[s1]);
        if(dist[mp[s2]] == 0)
        {
            pf("No route\n");
            continue;
        }
        //vector<int> v;
        int d = mp[s2];

        while(1)
        {
            vc.push_back(d);    /// 2D vector so , ...
            d = parent[d];
            if(d == parent[d])
                break;
        }
        for(int j = (vc.size())-1; j > 0; j--)
        {
            //pf("%s %s\n", mp1[j], mp1[j-1]);
            cout<<mp1[j]<<" "<<mp1[j-1]<<endl;
        }
    }

    return 0;
}
