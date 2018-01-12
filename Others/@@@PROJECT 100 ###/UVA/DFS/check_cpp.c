#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<map>
#define max 100008

using namespace std;

long int par[max],ara[max],cnt;

map<string,long int>mp;


long int find(long int n)
{
    if(par[n]==n)
        return n;

    return (par[n]=find(par[n]));

}

void cheak(long int u,long int v)
{

    long int U,V;
    U = find(u);
    V = find(v);
    printf("=>U and V: %d %d\n"U,V);
    printf("->ara[U] and ara[V]: %d %d\n"ara[U],ara[V]);
    if(U!=V)
    {
        par[V]=U;
        ara[U]+=ara[V];
    }

    cout<<ara[U]<<endl;


}

int main()
{

    string s1,s2;

    long int x,y,a,i,j,cas,node,edge;

    cin>>cas;

    for(long int k=0;k<cas;k++)
    {

        cin>>edge;

        a=0;
        cnt=0;
        mp.clear();

        for(i=0;i<edge;i++)
        {
            cin>>s1>>s2;

            if(mp.find(s1)==mp.end())
            {
                par[a] = a;
                ara[a]=1;
                mp[s1]=a++;

            }
            if(mp.find(s2)==mp.end())
            {
                par[a] = a;
                ara[a]=1;
                mp[s2]=a++;
            }

             x = mp[s1];
             y = mp[s2];

            cheak(x,y);
        }

    }
    return 0;
}