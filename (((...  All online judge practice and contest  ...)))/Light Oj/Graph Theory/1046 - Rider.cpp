#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<math.h>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <deque>
#include <list>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long lomg
#define db double
#define pi acos(-1)
#define pb push_back
#define mod 1000000007
#define pf printf
#define sf scanf
#define sof sizeof
#define pob pop_back()
#define gcd(a,b) __gcd(a,b)
#define logab(a,b) (log(a) / lob(b))
#define mem(a,v) memset(a, v, sizeof(a))
#define m_p make_pair
#define all(v) (v.begin(), v.end())
#define loop(type, v, it) for(type::iterator it = v.begin(); it != v.end(); ++it)
#define rep(i, a, n) for(int i = a; i <= n; ++i)
#define rrep(i, a, n) for(int i = n; i>= 0; i--)
#define sf1(a) scanf("%d", &a)
#define sf2(a, b) scanf("%d %d", &a, &b)
#define sf3(a, b, c) scanf("%d %d %d", &a, &b, &c)
#define sf4(a, b, c, d) scanf("%d %d %d %d", &a, &b, &c, &d)
#define sfl1(a) scanf("%lld", &a)
#define sfl2(a, b) scanf("%lld %lld", &a, &b)
#define sfl3(a, b, c) scanf("%lld %lld %lld", &a, &b, &c)
#define sfl4(a, b, c, d) scanf("%lld %lld %lld %lld", &a, &b, &c, &d)
#define lb lower_bound
#define ub upper_bound
#define fr first
#define sc second
#define exp1 exp(1)
#define INF 1000000000


typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;

int cas = 1;
int dxx[] = {1, 1, 2, 2, -1,-1, -2,-2};
int dyy[] = {2, -2,1, -1,2, -2, 1, -1};
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

char board[12][12];
int level[12][12];
int m,n;
int ans;

int bfs(int sx, int sy){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) level[i][j] = INF;
    }
    queue < pii > q;
    pii pr;
    q.push({sx,sy});
    level[sx][sy]=0;

    while(!q.empty()){
        pr = q.front();
        q.pop();
        int vx,vy;
        for(int i=0; i<8; i++){
            vx = pr.fr + dxx[i];
            vy = pr.sc + dyy[i];
            if(vx>=0 && vx<m && vy>=0 && vy<n && level[vx][vy]>level[pr.fr][pr.sc] + 1){
                level[vx][vy] = level[pr.fr][pr.sc] + 1;
                q.push({vx,vy});
            }
        }
    }
    int res=0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] != '.'){
                if(level[i][j]>=INF) return INF;
                int k = board[i][j] - '0';
                res += (level[i][j]+k-1)/k; // For output 0
            }
        }
    }
    return res;
}


int main()
{

    int tc,cnt;
    cin >> tc;
    for(int t=1; t<=tc; t++){
        cin >> m >> n;
        getchar();
        cnt = 0;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                scanf("%c",&board[i][j]);
                if(board[i][j] != '.') ++cnt;
            }
            getchar();
        }
        ///BFS CALL:
        ans = INF;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                ans = min(ans, bfs(i,j));
            }
        }
        if(ans < INF) printf("Case %d: %d\n",t,ans);
        else printf("Case %d: -1\n",t);
    }

    return 0;
}

/**

1
10 10
..........
.2....2...
......2...
1.........
...2.1....
...1......
..........
.......21.
..........
..........

**/
