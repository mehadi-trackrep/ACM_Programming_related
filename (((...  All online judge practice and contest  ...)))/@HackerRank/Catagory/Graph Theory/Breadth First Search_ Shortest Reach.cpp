
#include<iostream>
#include<cstdio>
#include<list>
#include<string>
#include<cstring>
#include<sstream>
#include<cctype>
#include<string.h>
#include<algorithm>
#include<cmath>
#include<stack>
#include<fstream>
#include<cstdlib>
#include<vector>
#include<map>
#include<set>
#include<utility>
#include<iomanip>
#include<queue>
#include<deque>
#include<iterator>
#include<assert.h>
#include<bitset>
#include<climits>
#include<ctime>
#include<complex>

using namespace std;

#define PI acos(-1.0)
#define i64 long long
#define MAX 1005
#define check cerr << "####=>"

vector <int> graph[MAX];
int visit[MAX];

void dfs(int SN)
{
    if(visit[SN]) return;
    visit[SN] = 1;
    //cerr << "SN: " << SN << endl;
    for(int i = 0; i<graph[SN].size(); ++i)
    {
        dfs(graph[SN][i]);
    }
}

int main()
{
    int Tcase;
    int N,M;
    cin >> Tcase;
    while(Tcase--)
    {
        cin >> N >> M;



        for(int i=1; i<=M; i++)
        {
            int u,v;
            cin >> u >> v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        int SN;

        cin >> SN;

        memset(visit,0,sizeof(visit));

        dfs(SN);
        //cerr << "N: " << N << endl;
        for(int i=1; i<=N; i++)
        {
            if(i != SN)
            {
                if(visit[i] == 1)
                    printf("6");
                else
                    printf("-1");

                if(i <= N-1)
                    printf(" ");
            }
            graph[i].clear();
        }

        printf("\n");

    }
    return 0;
}
