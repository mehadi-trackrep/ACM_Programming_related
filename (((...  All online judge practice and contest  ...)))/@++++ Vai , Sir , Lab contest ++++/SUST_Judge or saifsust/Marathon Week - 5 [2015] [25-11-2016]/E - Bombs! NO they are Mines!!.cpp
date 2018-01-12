/*
    BISMILLAH HIR RAHMANIR RAHIM .. "ALLAH IS ALMIGHTY" .

    ###########################################################################
    #                                                                         #
    #   //        //  //////   //    //      /\      //////\\    /////////    #
    #   // /    / //  //       //    //     /  \     //       \      //       #
    #   //   /    //  /////    ////////    /////\    //       |      //       #
    #   //        //  //       //    //   /      \   //       /      //       #
    #   //        //  //////   //    //  /        \  ////////    /////////    #
    #                                                                         #
    ###########################################################################
                                                                              SUST
*/

#include <bits/stdc++.h>
using namespace std;

#define SIZ     	1005
#define fi(i,a,b)           for(int i=a; i<=b; i++)
#define sf1(a)                scanf("%d", &a)
#define sf2(a,b)              scanf("%d %d",&a, &b)
#define pf1(a)                printf("%d\n", a)

int dx[]= {0,0,1,-1};	/*4 side move*/
int dy[]= {-1,1,0,0};	/*4 side move*/
int N,M;
char graph[SIZ][SIZ];
int level[SIZ][SIZ],Dx,Dy;

void bfs(int sx,int sy)            ///AC
{
    //deb(sy);
    queue<pair<int,int> > q ;
    bool visited[SIZ][SIZ];
    fi(i,0,N-1)
    fi(j,0,M-1) visited[i][j] = false;
    q.push(make_pair(sx,sy));
    level[sx][sy] = 0;
    visited[sx][sy] = 1;

    while(!q.empty())
    {
        pair <int,int> U = q.front(); q.pop();

        for(int i=0 ; i<4 ; i++)
        {
            int vx = U.first+dx[i];
            int vy = U.second+dy[i];

            if(vx>=0 && vx <N && vy >=0 && vy <M && !visited[vx][vy] && graph[vx][vy]!='#')
            {
                visited[vx][vy] =  1 ;
                level[vx][vy] = level[U.first][U.second] + 1;
                if(vx == Dx and vy == Dy) return ;
                q.push(make_pair(vx,vy)) ;
            }
        }
    }

}

int main()
{
    while(sf2(N,M) and (N+M))
    {
        fi(i,0,N-1)
        fi(j,0,M-1)
        {
            graph[i][j] = '.';
        }
        int qr;
        sf1(qr);
        while(qr--)
        {
            int x,total,y;
            sf2(x,total);
            while(total--)
            {
                sf1(y);
                graph[x][y] = '#';
            }
        }
        int sx,sy;
        sf2(sx,sy);
        sf2(Dx,Dy);
        bfs(sx,sy);
        cout << level[Dx][Dy] << endl;
    }

    return 0;
}

/*


10 10
9
0 1 2
1 1 2
2 2 2 9
3 2 1 7
5 3 3 6 9
6 4 0 1 2 7
7 3 0 3 8
8 2 7 9
9 3 2 3 4


*/
