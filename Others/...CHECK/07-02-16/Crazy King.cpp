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


#include <iostream>
#include <cstdio>
#include <vector>
#include <queue>
#include <utility> /// where define pair
#include <cstring>
using namespace std;
#define max 110
#define piar pair <int,int>

int fx[10] = {-1,-1,-1,0,0,1,1,1};
int fy[10] = {-1,0,1,-1,1,-1,0,1};

int level[max][max];
char grid[max][max];
int visited[max][max];
int row,column;

void BFS(int sx,int sy)
{
    //int visited[max][max];// = {0};
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
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
void print_level();

int main()
{
    int i,j,t;
    int Ax,Ay,Bx,By;

    cin >> t;

    while(t--){

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

        BFS(Ax,Ay);
        //output_check();
        //print_level();

        if(level[Bx][By] != 0)
            printf("Minimal possible length of a trip is %d\n",level[Bx][By]);
        else
            printf("King Peter, you can't go now!\n");
    }

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
void print_level()
{
    memset(level,0,sizeof(level));
    //level[max][max] = {0};
    cout << "\n\n";
    for(int i = 1;i <= row;i++){
        for(int j = 1;j <= column;j++)
            printf("%d",level[i][j]);
        cout << '\n';
    }
}
/*
4
5 5
.Z..B
..Z..
Z...Z
.Z...
A....

3 2
ZB
.Z
AZ

6 5
....B
.....
.....
..Z..
.....
A..Z.

3 3
ZZ.
...
AB.


///.........

6
5 5
Z....
....B
.....
.....
A...Z
8 8
Z.......
....B...
........
........
....Z...
.Z......
........
A......Z
8 9
Z.......Z
....B....
....Z....
...Z.....
....Z....
.Z....Z..
.........
.....A.Z.
8 9
Z.......Z
..Z.B..Z.
....Z....
...Z.....
....Z....
.Z....Z..
.........
.....A.Z.
1 2
AB
3 3
B..
..Z
A..

*/

