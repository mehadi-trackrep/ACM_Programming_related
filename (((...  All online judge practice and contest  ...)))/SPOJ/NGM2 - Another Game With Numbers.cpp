#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,k;
    int ara[20];
    scanf("%d%d",&n,&k);

    for(int i=0; i<k; i++)scanf("%d",&ara[i]);

    int ans=0,ck;

    sort(ara, ara+k);

    for(int i=0; i<k; i++){
        if(ara[i] == 0) continue;

        if(i == 0) ans = n/ara[i];
        else{
            ck=1;
            for(int j=i-1; j>=0; j--){
                if(ara[i]%ara[j] == 0){
                    ck = 0;
                    break;
                }
            }
            //cerr << "ck: " << ck << endl;
            if(ck) ans += n/ara[i];
            if(ck){
                for(int j=i-1; j>=0; j--){
                    if(ara[i]*ara[j] <= n) ans--;
                }
            }
        }
    }

    printf("%d\n",n-ans);

    return 0;
}
