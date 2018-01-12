#include<bits/stdc++.h>
using namespace std;

int p[30];

int find_representative(int r){
    if(p[r]==r) return r;
    p[r]=find_representative(p[r]);
    return p[r];

}

void union_two(int x,int y)
{
    int u,v;
    u=find_representative(x);
    v=find_representative(y);
    if(u!=v){
        p[u]=v;
    }
}

int main()
{
    int x,y,i,j,t,cou;
    //bool c[30];
    map<char,int>m;
    char a[3];

    scanf("%d\n",&t);

    for(int cas = 1; cas<=t; cas++){
        gets(a);
        //c[30]={0};
        int n=a[0]-'A'+1;
        //printf("%d",n);

        for(i=1;i<=n;i++) p[i]=i;

        while(gets(a)){
            if(a[0]=='\0') break;

            if(m.find(a[0]) == m.end()) m[a[0]]=a[0]-'A'+1;
            if(m.find(a[1])== m.end()) m[a[1]]=a[1]-'A'+1;
            union_two(m[a[0]],m[a[1]]);
        }
        for(i=1,cou=0;i<=n;i++){
            if(p[i]==i){
                cou++;
            }
        }
        if(cas != 1) printf("\n");
        printf("%d\n",cou);
        m.clear();
    }

    return 0;
}

/*

2

E
AB
CE
DB
EC

G
AB
CE
DB
EC
EF
GG


*/
