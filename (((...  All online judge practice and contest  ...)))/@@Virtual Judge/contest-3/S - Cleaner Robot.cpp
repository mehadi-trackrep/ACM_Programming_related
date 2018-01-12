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
#define M 100

int cnt = 1;
int vis[15][15];
int r,c,px,py;
char room[15][15],direction;

void traverse();

int main()
{

    cin >> r >> c;
    getchar();
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%c",&room[i][j]);

            if(room[i][j] != '.' && room[i][j] != '*')
            {
                px = i;
                py = j;
                direction = room[i][j];
                cerr << "==>" << direction << endl;
            }
        }
        getchar();
    }

    memset(vis,0,sizeof(vis));

    traverse();

    printf("%d\n",cnt);

    return 0;
}

void traverse()
{
    int ck = 1;

    while(ck == 1)
    {
        ck = 0;

        if(direction == 'U')
        {
            cerr << "==>" << direction << endl;
            cerr << "px: " << px << " py: " << py << endl;
            px--;
            if(py >= 0 && py < c){
                while(px >= 0 && px < r && vis[px][py] == 0 && room[px][py] == '.')
                {
                    cerr << "px: " << px << " py: " << py << endl;
                    ck = 1;
                    vis[px][py] = 1;
                    cnt++;
                    px--;
                }

            }

            px++;

            if(py < 0)
                py++;
            else if(py >= c)
                py--;

            direction = 'R';
        }

        if(ck == 1)
            continue;
        if(direction == 'R')
        {
            cerr << "==>" << direction << endl;
            cerr << "px: " << px << " py: " << py << endl;
            py++;
            if(px >= 0 && px < r){
                while(py >= 0 && py < c && vis[px][py] == 0 && room[px][py] == '.')
                {
                    cerr << "px: " << px << " py: " << py << endl;
                    ck = 1;
                    vis[px][py] = 1;
                    cnt++;
                    py++;
                }

            }

            if(px < 0)
                px++;
            else if(px >= r)
                px--;

            py--;

            direction = 'D';
        }

        if(ck == 1)
            continue;
        if(direction == 'D')
        {
            cerr << "==>" << direction << endl;
            cerr << "px: " << px << " py: " << py << endl;
            px++;
            if(py >= 0 && py < c){
                while(px >= 0 && px < r && vis[px][py] == 0 && room[px][py] == '.')
                {
                    cerr << "px: " << px << " py: " << py << endl;
                    ck = 1;
                    vis[px][py] = 1;
                    cnt++;
                    px++;
                }

            }

            px--;

            if(py < 0)
                py++;
            else if(py >= c)
                py--;

            direction = 'L';
        }

        if(ck == 1)
            continue;
        if(direction == 'L')
        {
            cerr << "==>" << direction << endl;
            cerr << "px: " << px << " py: " << py << endl;
            py--;
            if(px >= 0 && px < r){
                while(py >= 0 && py < c && vis[px][py] == 0 &&  room[px][py] == '.')
                {
                    cerr << "px: " << px << " py: " << py << endl;
                    ck = 1;
                    vis[px][py] = 1;
                    cnt++;
                    py--;
                }

            }

            if(px < 0)
                px++;
            else if(px >= r)
                px--;

            py++;

            direction = 'U';
        }

        if(ck == 0)
            break;
    }
}
