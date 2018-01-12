#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v[100];

    for(int i=0; i<4; i++)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        v[i].push_back(x);
        v[i].push_back(y);
    }
    printf("..........................\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<v[i].size(); j++)
            printf("%d ",v[i][j]);
        printf("\n");
    }

}
