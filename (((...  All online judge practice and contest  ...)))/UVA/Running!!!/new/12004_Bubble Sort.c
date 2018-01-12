#include <stdio.h>
int main()
{
    long long a,b;
    int ck,t,i,j;
    i=0;
    scanf("%d",&t);
    while(t--){
        i++;
            ck=0;
    scanf("%lld",&a);
    b=a*(a-1);
   j=0;
    while(j<2){
 if(b%2==0)b=b/2;
    else {
        ck=1;
        break;
    }
    j++;
    }
    if(ck==1){
    printf("Case %d: %lld/2\n",i,b);
    }
    else printf("Case %d: %lld\n",i,b);
    }
    return 0;
}
