
/// Bismilla~hir Rahma~nir Rahi~m ///



#include <bits/stdc++.h>

using namespace std;

// definitions

#define pi	acos(-1.0)
#define ll	long long
#define ull	unsigned long long
#define ff	first
#define ss	second
#define pb	push_back

#define MAX	1000000
#define mod	1000000007
#define INF	2147483647

// I/O

#define sf                   scanf
#define pf                   printf

#define sf1(a)               scanf("%d", &a)
#define sf2(a,b)             scanf("%d%d",&a, &b)
#define sf3(a,b,c)           scanf("%d%d%d", &a, &b, &c)
#define sf4(a,b,c,d)         scanf("%d%d%d%d", &a, &b, &c, &d)
#define sf5(a,b,c,d,e)       scanf("%d%d%d%d%d", &a, &b, &c, &d, &e)

#define sll1(a)              scanf("%I64d", &a)
#define sll2(a,b)            scanf("%I64d%I64d", &a, &b)
#define sll3(a,b,c)          scanf("%I64d%I64d%I64d", &a, &b, &c)
#define sll4(a,b,c,d)        scanf("%I64d%I64d%I64d%I64d", &a, &b, &c, &d)

#define pf1(a)               printf("%d\n",a)
#define pf2(a,b)             printf("%d %d\n",a,b)
#define pf3(a,b,c)           printf("%d %d %d\n",a,b,c)
#define pf4(a,b,c,d)         printf("%d %d %d %d\n",a,b,c,d)

#define pll1(a)              printf("%I64d\n",a)
#define pll2(a,b)            printf("%I64d %I64d\n",a,b)
#define pll3(a,b,c)          printf("%I64d %I64d %I64d\n",a,b,c)
#define pll4(a,b,c,d)        printf("%I64d %I64d %I64d %I64d\n",a,b,c,d)

#define READ                 freopen("input.txt", "r", stdin);
#define WRITE                freopen("output.txt", "w", stdout);

//loops

#define fep(i,a,b)            for(i=a;i<=b;i++)
#define fem(i,a,b)            for(i=a;i>=b;i--)
#define fp(i,a,b)             for(i=a;i<b;i++)
#define fm(i,a,b)             for(i=a;i<b;i++)

char graph[25][25];
int n;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};

int bfs(int i,int j)            ///AC
{
    pair<int,int> u , v ;
    int k;
    queue< pair<int,int> >q ;
    q.push(make_pair(i,j));
    int visited[25][25]= {0} , level[25][25] ;
    visited[i][j] = 1 ;
    level[i][j] = 0 ;

    while(!q.empty())
    {
        u = q.front();
        for(k=0 ; k<4 ; k++)
        {

            int x=u.first+dx[k];
            int y=u.second+dy[k];


            if(!visited[x][y] && graph[x][y]!='#' && graph[x][y]!='m')
            {
                level[x][y] = level[u.first][u.second] + 1 ;
                visited[x][y] =  1 ;
                if(graph[x][y]=='h')
                {
                    return level[x][y];

                }

                q.push(make_pair(x,y)) ;
            }
           // pf("%d %d = %d\n",x,y,level[x][y]);
        }
        q.pop();
    }
}

int main()
{
    int t,cs=1,ai,bi,ci,aj,bj,cj,r,c,i,j;


    sf1(t);
    while(t--)
    {
        cin>>r>>c;

        fp(i,0,r){
        fp(j,0,c){
            cin>>graph[i][j];
            if(graph[i][j]=='a'){
                ai=i;
                aj=j;
            }
            if(graph[i][j]=='b'){
                bi=i;
                bj=j;
            }
            if(graph[i][j]=='c'){
                ci=i;
                cj=j;
            }
            }
        }

        int ans;
        ans=bfs(ai,aj);
        ans=max(ans,bfs(bi,bj));
        ans=max(ans,bfs(ci,cj));

        pf("Case %d: %d\n",cs++,ans);
    }
    return 0;
}

/*

2
6 8
########
#...c..#
#......#
#.a.h.b#
#......#
########
5 9
#########
#mmm...c#
#ma.h####
#m....b.#
#########

*/
