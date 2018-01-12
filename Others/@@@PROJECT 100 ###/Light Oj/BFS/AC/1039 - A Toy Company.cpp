/*
    BISMILLAH HIR RAHMANIR RAHIM

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       /      //       #
    #   //        //  //       //    //   /      \   //       /      //       #
    #   //        //  //////   //    //  /        \  ////////    /////////    #
    #                                                                         #
    ###########################################################################
                                                                              SUST
*/

#include <bits/stdc++.h>

using namespace std;

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

/// I/O Start
#define sf                    scanf
#define pf                    printf

#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define sf3(a,b,c)            scanf("%d %d %d", &a, &b, &c)
#define sf4(a,b,c, d)         scanf("%d %d %d %d", &a, &b, &c, &d)

#define sf1ll(a)              scanf("%I64d", &a)
#define sf2ll(a,b)            scanf("%I64d %I64d", &a, &b)
#define sf3ll(a,b,c)          scanf("%I64d %I64d %I64d", &a, &b, &c)
#define sf4ll(a,b,c, d)       scanf("%I64d %I64d %I64d %I64d", &a, &b, &c, &d)

#define READ                  freopen("input.txt", "r", stdin);
#define WRITE                 freopen("output.txt", "w", stdout);
/// I/O End

//#define loop_tcas(int n)	for(int cas=1; cas<=n; cas++)		/// V.V.I.

#define mx	26
#define mod	1000000007
#define INF	2147483647
#define mxn	1000

string start,finish,s1,s2,s3;

int vis[26][26][26];
int dis[26][26][26];

int dx[] = {0,0,1,0,0,-1};   /// directional array
int dy[] = {0,1,0,0,-1,0};
int dz[] = {1,0,0,-1,0,0};

struct node
{
    int x,y,z;
};

queue <node> q;

bool flag;
int rx,ry,rz;

void BFS(node src)          ///AC
{
    q.push(src);

    vis[src.x][src.y][src.z] = 1;
    dis[src.x][src.y][src.z] = 0;

    int a,b,c;
    node n,p;

    while(!q.empty() && !flag)
    {
        n = q.front();
        q.pop();

        if(n.x == finish[0]-'a' && n.y == finish[1]-'a' && n.z == finish[2]-'a')
        {
            flag = true;
            break;
        }

        for(int i=0; i<6; i++)      /// ekta node theke highest 6 ta node a jaoa jabe , segula ber kora hocce .....
        {
            a = (n.x+dx[i])%26;
            b = (n.y+dy[i])%26;
            c = (n.z+dz[i])%26;

            if(a < 0) a += 26;
            if(b < 0) b += 26;
            if(c < 0) c += 26;

            if(vis[a][b][c] == 0)
            {
                vis[a][b][c] = 1;
                dis[a][b][c] = dis[n.x][n.y][n.z] + 1;
                p.x = a;
                p.y = b;
                p.z = c;
                q.push(p);
            }
        }
    }

    rx = n.x;
    ry = n.y;
    rz = n.z;
}

int main()
{
    int tc,t;

    cin >> tc;

    for(int cas=1; cas<=tc; cas++)
    {
        cin >> start >> finish >> t;

        memset(vis,0,sizeof(vis));

        for(int i=1; i<=t; i++)
        {
            cin >> s1 >> s2 >> s3;

            int len1 = s1.length();
            int len2 = s2.length();
            int len3 = s3.length();

            for(int j=0; j<len1; j++)
            {
                for(int k=0; k<len2; k++)
                {
                    for(int l=0; l<len3; l++)
                    {
                        vis[s1[j]-'a'][s2[k]-'a'][s3[l]-'a'] = -1;
                    }
                }
            }
        }

        while(!q.empty()) q.pop();

        flag = false;

        if(vis[start[0]-'a'][start[1]-'a'][start[2]-'a'] == -1 || vis[finish[0]-'a'][finish[1]-'a'][finish[2]-'a'] == -1)
        {
            printf("Case %d: -1\n",cas);
            continue;
        }

        node p;

        p.x = start[0]-'a';
        p.y = start[1]-'a';
        p.z = start[2]-'a';

        BFS(p);

        //if(flag) printf("Case %d: %d\n",cas,dis[finish[0]-'a'][finish[1]-'a'][finish[2]-'a']);
        if(flag) printf("Case %d: %d\n",cas,dis[rx][ry][rz]);
        else printf("Case %d: %d\n",cas, -1);
    }

	return 0;
}

/// save test cases

/*




*/
