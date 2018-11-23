#include <bits/stdc++.h>
using namespace std;

int n,k,cnt;
bool vis[30];
char str[30];

void permutation(int pos){
    if(pos == n){
        for(int j=0; j<n; j++) printf("%c",str[j]);
        cnt++;
        printf("\n");
        return;
    }
    if(cnt >= k) return;
    for(int i=0; i<n; i++){
        if(!vis[i]){
            vis[i] = 1;
            str[pos] = i+'A';
            permutation(pos+1);
            vis[i] = 0;
        }
    }
    return ;
}

int main()  ///AC
{
    int tc;
    cin >> tc;
    for(int c=1; c<=tc; c++){
        cnt=0;
        cin >> n >> k;
        memset(vis, false, sizeof(vis));
        printf("Case %d:\n",c);
        permutation(0);
    }
    return 0;
}
