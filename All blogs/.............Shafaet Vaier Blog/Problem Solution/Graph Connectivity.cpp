#include<iostream>
#include<cstdio>
#include<cstring>
#define max 1111

using namespace std;
int par[max],cnt;
void makeset(int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        par[i]=i;
    }
}

int find(int n)
{
    if(par[n]==n)
        return n;
    else
    {
        return (par[n]=find(par[n]));
    }
}

void cheak(int u,int v)
{
    int U,V;
    U = find(u);
    V = find(v);

    if(U!=V)
    {
        par[U]=V;
        cnt--;

    }
}

int main()
{
    char str[max],ch;

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

            cheak(a,b);
        }
        if(k!=1)
            printf("\n");

        printf("%d\n",cnt);

    }
    return 0;
}
