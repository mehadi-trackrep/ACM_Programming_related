#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;    ///AC
#define M 30 /// maximum 26 ta letter;so, par er size 26 deoa jay...
int par[M],cnt;
void makeset(int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        par[i]=i;
    }
}

int find_set(int n)
{
    if(par[n]==n)
        return n;
    else
    {
        return (par[n]=find_set(par[n]));
    }
}

void re_union(int u,int v)
{
    int U,V;
    U = find_set(u);
    V = find_set(v);

    if(U!=V)
    {
        par[U]=V;
        cnt--;

    }
}

int main()
{
    char str[5],ch;

    int len,i,j,k,cas,x,a,b;

    scanf("%d",&cas);
    getchar();
    getchar();
    for(k=1;k<=cas;k++)
    {

        scanf("%c",&ch);
        getchar();
        x = ch-64;
        makeset(x);
        cnt = x;
        while(gets(str))
        {
            if(str[0]=='\0')
                break;
            a = str[0]-64;
            b = str[1]-64;

            re_union(a,b);
        }
        if(k!=1)
            printf("\n");

        printf("%d\n",cnt);

    }
    return 0;
}

/*

1

E
AB
CE
DB
EC

*/
