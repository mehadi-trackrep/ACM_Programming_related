#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<map>
#define M 100008

using namespace std;

long int par[M],sz[M],cnt;

map<string,long int>mp;


long int find_parent(long int n)
{
    if(par[n]==n)
        return n;

    return (par[n]=find_parent(par[n]));

}

void cheak(long int u,long int v)
{

    long int U,V;
    U = find_parent(u);
    V = find_parent(v);
    //printf("=>U and V: %d %d\n",U,V);
    //printf("->ara[U] and ara[V]: %d %d\n",ara[U],ara[V]);
    if(U!=V)
    {
        par[V]=U;
        sz[U]+=sz[V];
    }

    cout<<sz[U]<<endl;


}

int main()
{

    string s1,s2;

    long int x,y,a,i,j,cas,node,edge;

    cin>>cas;

    for(long int k=0;k<cas;k++)
    {

        cin>>edge;

        a=1;
        cnt=0;
        mp.clear();

        for(i=0;i<edge;i++)
        {
            cin>>s1>>s2;

            if(mp[s1] <= 0)
            {
                par[a] = a; /// new joto gula node ashce...tar parent se nijei
                sz[a]=1;
                mp[s1]=a++;

            }
            if(mp[s2] <= 0)
            {
                par[a] = a;
                sz[a]=1;
                mp[s2]=a++;
            }

             x = mp[s1];
             y = mp[s2];

            cheak(x,y);
        }

    }
    return 0;
}

/*

1
4
Fred Barney
Barney Betty
Betty Wilma
Fred Wilma

*/