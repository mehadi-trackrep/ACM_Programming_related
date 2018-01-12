#include <bits/stdc++.h>
using namespace std;
int a[200000],b[200000];
int main()
{
    int n,indexa,indexb,temp;

    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        scanf("%d",&a[i]);
        if(a[i] == 0)
            indexa = i;
    }
    for(int i=1; i<=n; i++){
        scanf("%d",&b[i]);
        if(b[i] == 0)
            indexb = i;
    }
    //printf("INDEXA : %d\n",indexa);
    //printf("INDEXB : %d\n",indexb);
    while(1){

        if(indexa == 1){
            temp = a[n];
            a[n] = a[indexa];
            a[indexa] = temp;
            indexa = n;
            if(indexa == indexb)
                break;
        }
        else{
            temp = a[indexa-1];
            a[indexa-1] = a[indexa];
            a[indexa] = temp;
            indexa--;
            if(indexa == indexb)
                break;
        }
    }

    int ck = 0;

    for(int i=1; i<=n; i++){
        //printf("%d ",a[i]);
        if(a[i] == b[i]){
            continue;
        }
        else{
            ck = 1;
            break;
        }
    }
    if(ck == 0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

