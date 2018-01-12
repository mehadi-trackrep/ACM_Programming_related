#include <algorithm>
#include <map>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <set>
#include <string.h>
#include <stack>
#include <stdlib.h>

using namespace std;

typedef long long ll;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef pair<ll, ll> point;

char arr[50+47][50+47];
int r, c, total;
int visited[50+47][50+47];

int dfs(int x, int y)
{
    if ((x<0)||(r<=x)) return 0;
    if ((y<0)||(c<=y)) return 0;
    if (visited[x][y]==1) return 0;
    if (arr[x][y]=='.') return 0;

    visited[x][y]=1;

    return 1+dfs(x+1,y)+dfs(x-1,y)+dfs(x,y+1)+dfs(x,y-1);
}

int main()
{
    bool possible1=false;

    scanf("%d %d", &r, &c);
    for (int i=0; i<r; i++) scanf("%s", arr[i]);

    for (int ir=0; ir<r; ir++)
        for (int ic=0; ic<c; ic++) if (arr[ir][ic]=='#') total++;

    if (total<=2)
    {
        printf("-1\n");
        return 0;
    }

    for (int ir=0; ir<r; ir++) for (int ic=0; ic<c; ic++)
    {
        char was=arr[ir][ic];
        int tmp=0, expected=total-((was=='#')?1:0);

        arr[ir][ic]='.';
        for (int a=0; a<r; a++) for (int b=0; b<c; b++) visited[a][b]=0;
        for (int a=0; a<r; a++) for (int b=0; b<c; b++) if ((tmp==0)&&(arr[a][b]=='#')) tmp=dfs(a, b);
        if (tmp!=expected) possible1=true;
        arr[ir][ic]=was;
    }
    if (possible1) printf("1\n");
    else printf("2\n");
    return 0;
}
