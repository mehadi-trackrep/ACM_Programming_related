#include<stdio.h>
int main(){
    int i,o,p,n,t;
    scanf("%d",&t);
    for(i = 1;i<=t;i++){
        scanf("%d",&n);
        p = 0;
        while(n%2==0 && n/2 >= 1){
            n = n/2;
            p++;
        }
        o = n;
        printf("%d %d\n",o,p);

    }
    return 0;
}
