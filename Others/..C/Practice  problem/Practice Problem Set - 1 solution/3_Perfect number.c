#include <stdio.h>
int main(){

    int i,n,sum = 0;
    while(scanf("%d",&n)==1){
        if(n<0){
            printf("%d is not a perfect number\n",n);
            continue;
        }
        for(i=n-1;i>=1;i--){
            if(n%i==0)
                sum = sum + i;
        }
        if(sum == n)
            printf("%d is a perfect number\n",n);
        else printf("%d is not a perfect number\n",n);

        sum = 0;
    }

}
