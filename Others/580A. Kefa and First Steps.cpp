#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a[100005];

    scanf("%d",&n);

    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int mx=1,cnt=1;

    for(int i=1; i<n; i++){
        if(a[i]>=a[i-1]){
            cnt++;
        }else cnt = 1;

        if(cnt>mx) mx=cnt;
    }
    printf("%d\n",mx);

    return 0;
}
