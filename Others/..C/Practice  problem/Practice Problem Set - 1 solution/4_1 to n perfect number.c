#include <stdio.h>
int main(){

    int i,n,j,sum = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=i-1;j>=1;j--){
            if(i%j==0)
                sum = sum + j;
        }
        if(sum == i)
        printf("The perfect number is %d\n",i);

        sum = 0;
    }
    return 0;
}

