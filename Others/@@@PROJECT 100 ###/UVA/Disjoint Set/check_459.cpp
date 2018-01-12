#include <cstring>
#include <cstdio>
#include <iostream>
using namespace std;
#define M 30
int par[M],N,cnt;   ///ekhettere N means Node
void makeset(int N)
{
    for(int i=1; i<=N; i++)
    {
        par[i] = i;
    }
}

int find_set(int r)
{
    if(par[r] == r)
        return r;
    else
        return par[r] = find_set(par[r]);
}

void re_union(int u,int v)
{
    int x,y;
    x = find_set(u);
    y = find_set(v);
    if(x != y){
        cnt--;
        par[x] = y;
    }
}

int main()
{
    int tcas;
    char ch,str[M];
    scanf("%d\n\n",&tcas);
    while(tcas--)
    {
        scanf("%c",&ch);
        getchar();
        N = ch-64;    ///A = 65;so 64 minus korlei pabo koyta node ase...
        makeset(N);
        cnt = N;
        for(int i=1; ; i++)
        {
            gets(str);
            if(str[0] == '\0')
                break;
            int a,b;
            a = str[0]-64;/// A->1,B->2,... vabe map bujhacci...
            b = str[1]-64;
            re_union(a,b);
        }
        if(tcas != 0)
            printf("\n");
        printf("%d\n",cnt);
    }

    return 0;
}
