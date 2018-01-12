#include <stdio.h>
int main(){

    int n,i;
    while(scanf("%d",&n)==1){
        if(n&1==1)
            printf("Odd");
        else if(n&2==1)
            printf("Even");
    }

}
