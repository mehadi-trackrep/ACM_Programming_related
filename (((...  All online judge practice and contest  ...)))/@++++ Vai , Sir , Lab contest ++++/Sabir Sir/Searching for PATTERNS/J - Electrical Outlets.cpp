#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i,n,out,ara[11];
   scanf("%d",&t);
   while(t--)
   {
       int ara_sum=0;
        cin>>n;
        for(i=0;i<n;i++){
            cin>>ara[i];
            ara_sum=ara_sum+ara[i];// cerr<<ara_sum<<endl;
        }
        //int ara_sum=0;
        int ans=ara_sum-(n-1);
        cout<<ans<<endl;


   } return 0;
}
/*
3
3 2 3 4
10 4 4 4 4 4 4 4 4 4 4
4 10 10 10 10
*/

