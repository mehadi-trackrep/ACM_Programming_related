#include <iostream>
#include <vector>
#include <queue>
#include <cstdio>
#include <string>
#include <cstring>
 
using namespace std;

int fx[] = {-2,-2,2,2,-1,1,-1,1};   ///AC
int fy[] = {-1,1,-1,1,-2,-2,2,2};

int column1,column2,row1,row2;
int level[100][100];

struct position
{
    int r,c;  
};

void bfs(int src_column,int src_row)
{
    int visited[100][100];
    
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
    
    queue <position> q;
    
    position get;
    
    get.r = src_row;
    get.c = src_column;
    
    q.push(get);
    
    visited[src_row][src_column] = 1;
    level[src_row][src_column] = 0;
    
    while(!q.empty())
    {
        get = q.front();
        
        int sx = get.r,sy = get.c;
        
        for(int i=0; i<8; i++)
        {   
            int px = sx + fx[i];
            int py = sy + fy[i];
           // cerr << "###" << endl;
            if(px >= 1 && px <= 8 && py >= 1 && py <= 8 && visited[px][py] == 0)
            {
                get.r = px;
                get.c = py;
                
                q.push(get);
                
                visited[px][py] = 1;
                
                level[px][py] = level[sx][sy] + 1;
                if(py==column2&&px==row2)return;
                
               // cerr << level[px][py] << "==" << px << ' ' << py << endl;
            }
        }
        //break;
        
        q.pop();
    }
    
}

int main()
{
    char str1[10],str2[10];
    
    while(cin>>str1>>str2)
    {
     
       column1=str1[0]-96;
       row1=str1[1]-48;
       column2=str2[0]-96;
       row2=str2[1]-48;
        
        if(row1 == row2 && column1 == column2)
            printf("To get from %s to %s takes 0 knight moves.\n",str1,str2);
        else
        {
            bfs( column1,row1 );
            printf("To get from %s to %s takes %d knight moves.\n",str1,str2,level[row2][column2]);
        }
         
    }
    
    return 0;
    
}

/*

e2 e4
a1 b2
b2 c3
a1 h8
a1 h7
h8 a1
b1 c3
f6 f6

*/