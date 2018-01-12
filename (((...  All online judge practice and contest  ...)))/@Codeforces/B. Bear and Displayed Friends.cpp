#include <bits/stdc++.h>
using namespace std;
int ara[150005];
struct data
{
    int u,w;
    bool operator < (const data &p)const
    {
        return w < p.w;
    }
}store[150000];

int main()
{
    int n,k,q,c=1;
    int vis[150005];
    cin >> n >> k >> q;
    for(int i=1; i<=n; i++)
    {
          scanf("%d",&ara[i]);
    }
    int a,b;
    memset(vis,0,sizeof vis);
    int ind=0,count = 0,ck = 0;
    for(int i=1; i<=q; i++)
    {
          cin >> a >> b;
          if(a == 1){
            if(count < k)
            {
                store[ind].u = b;
                store[ind++].w = ara[b];
                vis[b] = 1;
                count++;
            }
            else
            {
                store[ind].u = b;
                store[ind++].w = ara[b];
                vis[b] = 1;
                sort(store,store+ind);
                int v = store[ck++].u;
                vis[v] = 0;
            }
            
          }
          else if(a == 2)
          {
                if(vis[b] == 0)
                    printf("Case %d: NO\n",c++);
                else
                    printf("Case %d: YES\n",c++);
          }
    }
    
//    for(int i=0; i<ind; i++)
//        printf("u and w: %d %d\n",store[i].u,store[i].w);
    
    return 0;
}

/*

20 5 1000
21811562 102318825 140566972 182024929 186249960 234371355 265999142 296181684 313522949 338610327 352230922 428287887 490477790 520979893 569188026 728912676 749812447 786599213 841305598 931850712
1 15
2 14
2 19
1 4
2 2
1 5
2 1
1 3
1 7
2 10
1 10
2 12
1 14
2 18
1 2
2 13
1 13
2 14
2 18
2 18
2 8
1 6
2 16
2 5
1 20
2 18
2 12
2 5
1 9
2 12
2 14
2 2
1 16
1 11
2 3
2 18
1 18
2 20
2 11
1 8
2 14
2 10
2 10
2 16
2 14
2 20
2 9
2 4
2 2
2 18
2 17
2 13
2 20

output:
NO
NO
NO
NO
NO
NO
NO
NO
YES
NO
NO
NO
NO
NO
NO
NO
NO
NO
YES
NO
NO
NO
YES
NO
YES
NO
NO
YES
YES
YES
NO
NO
NO
YES
NO
NO
YES
NO
NO
NO
NO
NO
NO
NO
NO
YES
NO
NO
NO
NO
NO
YES
NO
NO
NO
YES
NO
NO
YES
NO
NO
NO
NO
NO
YES
NO
NO
YES
NO
NO
NO
NO
YES
NO
YES
NO
NO
NO
YES
NO
NO
YES
NO
YES
NO
NO
NO
NO
NO
NO
YES
NO
NO
NO
NO
NO
NO
NO
YES
NO
NO
YES
NO
NO
YES
YES
YES
NO
YES
NO
YES
NO
YES
NO
NO
NO
NO
NO
NO
NO
NO

*/