#include <bits/stdc++.h>
using namespace std;

int a1[200005];
int a2[200005];

int main()
{
    int n,m;

    scanf("%d%d",&n,&m);

    for(int i=0; i<n; i++) scanf("%d",&a1[i]);
    for(int i=0; i<m; i++) scanf("%d",&a2[i]);

    sort(a1, a1+n);

    int val;

    for(int i=0; i<m; i++){
        val = upper_bound(a1, a1+n, a2[i]) - a1;
        if(i == 0) printf("%d",val);
        else printf(" %d",val);
    }

    return 0;
}
