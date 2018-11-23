#include <bits/stdc++.h>
using namespace std;
#define sz 5000005
int ara[sz],temp[sz];
int ans;

void merge_sort(int node, int b, int e){
    if(b == e) return ;
    int l,r,mid,i,j,ind;
    l = node<<1;
    r = l+1;
    mid = (b+e)/2;
    merge_sort(l,b,mid);
    merge_sort(r,mid+1,e);
    i = b; //first sub-array starting index
    j = mid+1; //second sub-array starting index
    ind = b; //new array initial index
    while(i<=mid && j<=e){
        if(ara[i] >= ara[j]){
            ans+=abs(mid-i+1);
            temp[ind++] = ara[j];
            j++;
        }else{
            temp[ind++] = ara[i];
            i++;
        }
    }
    //rest first sub-array:
    while(i<=mid) temp[ind++] = ara[i++];
    //rest second sub-array:
    while(j<=e) temp[ind++] = ara[j++];

    for(int i=b; i<=e; i++){
        //printf("%d ",temp[i]);
        ara[i] = temp[i];
    }
    //cout << " ----------------- " << endl;

}

int main(){
    int n;
    while(scanf("%d",&n) == 1  && n){
        for(int i=1; i<=n; i++) scanf("%d",&ara[i]);
        ans = 0;
        merge_sort(1,1,n);
        printf("%d\n",ans);
    }
    return 0;
}
