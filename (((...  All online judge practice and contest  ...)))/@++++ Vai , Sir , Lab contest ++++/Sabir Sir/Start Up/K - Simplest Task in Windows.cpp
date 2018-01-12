#include <bits/stdc++.h>
using namespace std;

struct data{
    int x1,y1,x2,y2;
}X[15];

int main()
{
    int N,M;
    while(cin >> N)
    {
        if(N == 0)
            break;
        for(int i=0; i<N; i++)
        {
            int x1,y1,x2,y2;
            cin >> x1 >> y1 >> x2 >> y2;
            X[i].x1 = x1;
            X[i].y1 = y1;
            X[i].x2 = x2;
            X[i].y2 = y2;
        }
        cin >> M;
        for(int i=0; i<M; i++)
        {
            int x,y,ck = 0;
            cin >> x >> y;
            for(int j=N-1; j>=0; j--)
            {
                int x1,y1,x2,y2;
                
                x1 = X[j].x1;
                y1 = X[j].y1;
                x2 = X[j].x2;
                y2 = X[j].y2;
                //printf("%d %d %d %d\n",x1,y1,x2,y2);
                if(x >= x1 && x <= x2 && y >= y1 && y <= y2){
                    ck = 1;
                    printf("%d\n",j);
                    break;
                }
            }
            if(ck == 0)
                printf("-1\n");
            
        }
        
    }
    
    return 0;
}
/*

3
0 0 5 5
2 2 6 6
3 3 7 7
3
4 1
5 1
6 1
0

*/