#include <bits/stdc++.h>
using namespace std;

struct point
{
    int x,y;
    bool operator < (const point &data)const
    {
        if(x <= data.x) return true;
        return false;
    }
};

vector <point> vec;

int main()
{
    int n;
    int d;

    while(scanf("%d%d",&n,&d) == 2)
    {
        if(!(n+d)) break;

        for(int i=0; i<n; i++)
        {
            int x,y;

            scanf("%d%d",&x,&y);

            island[i].x = x;
            island[i].y = y;

            sort(island,island+n);
        }

        for(int i=0; i<n; i++)
        {
            printf("=> %d %d\n",island[i].x,island[i].y);
        }
    }

    return 0;
}
