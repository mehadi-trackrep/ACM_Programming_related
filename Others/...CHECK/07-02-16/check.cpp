#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility> /// where define pair
#include <cstring>
using namespace std;
#define max 100
#define piar pair <int,int>

int fx[10] = {-1,-1,-1,0,0,1,1,1};
int fy[10] = {-1,0,1,-1,1,-1,0,1};

int level[max][max];
char grid[max][max];
int row,column;

void BFS(int sx,int sy)
{
    int visited[max][max];// = {0};
    memset(visited,0,sizeof(visited));
    visited[sx][sy] = 1;
    level[sx][sy] = 0;
    queue <piar> q;
    q.push(piar(sx,sy));

    while(!q.empty()){
        piar top = q.front();
        int ux = top.first;
        int uy = top.second;
        for(int i = 0;i < 8;i++){

            int vx = ux + fx[i];
            int vy = uy + fy[i];

            if( (vx >= 1 && vx <= row) && (vy >= 1 && vy <= column)
               && (grid[vx][vy] != 'X' && grid[vx][vy] != 'Z' ) && visited[vx][vy] == 0 ) //Check if the neighbor is valid and not visited before.
			{
				visited[vx][vy] = 1;
                level[vx][vy] = level[ux][uy] + 1;
                q.push(piar(vx,vy));
			}
        }

        q.pop();
    }
}

void put_cross();
void output_check();

int main()
{
    int i,j;
    int Ax,Ay,Bx,By;

    cin >> row >> column;
    getchar();
    ///........giving input and A search:
    for(i = 1;i <= row;i++){    /// (1,1) position theke suru...
        for(j = 1;j <= column;j++){
            scanf("%c",&grid[i][j]);
            if(grid[i][j] == 'A'){
                Ax = i;
                Ay = j;
            }
            if(grid[i][j] == 'B'){
                Bx = i;
                By = j;
            }
        }
        getchar();
    }

    put_cross();

    output_check();

    BFS(Ax,Ay);

    printf("position: Ax = %d, Ay = %d and Bx = %d, By = %d , level of B: %d\n",Ax,Ay,Bx,By,level[Bx][By]);

    return 0;
}

void put_cross()
{
    int i,j;

    for(i = 1;i <= row;i++){
        for(j = 1;j <= column;j++){
            if(grid[i][j] == 'Z'){

                if(grid[i-2][j-1] == '.')
                    grid[i-2][j-1] = 'X';

                if(grid[i-2][j+1] == '.')
                    grid[i-2][j+1] = 'X';

                if(grid[i+2][j-1] == '.')
                    grid[i+2][j-1] = 'X';

                if(grid[i+2][j+1] == '.')
                    grid[i+2][j+1] = 'X';

                if(grid[i-1][j+2] == '.')
                    grid[i-1][j+2] = 'X';

                if(grid[i+1][j+2] == '.')
                    grid[i+1][j+2] = 'X';

                if(grid[i-1][j-2] == '.')
                    grid[i-1][j-2] = 'X';

                if(grid[i+1][j-2] == '.')
                    grid[i+1][j-2] = 'X';
            }
        }
    }
}

void output_check()
{
    cout << "\n\n";
    for(int i = 1;i <= row;i++){
        for(int j = 1;j <= column;j++)
            printf("%c",grid[i][j]);
        cout << '\n';
    }
}

/*

5 5
.Z..B
..Z..
Z...Z
.Z...
A....

3 3
ZZ.
...
AB.

3 2
ZB
.Z
AZ

5 3
Z.B
Z..
.Z.
...
A.Z

*/
