#include <stdio.h>

int min_func(int *ara,int n);
int max_func(int *ara, int n);

int main(){

    int n,ara[20],i;

    scanf("%d",&n);

    for(i = 0;i < n;i++){
        scanf("%d",&ara[i]);
    }

    printf("max = %d ",max_func(ara,n));
    printf("min = %d",min_func(ara,n));

    return 0;
}

int max_func(int *ara, int n){

    int i,j,max;
    max = ara[0];

    for(i = 1;i < n;i++){
        if(ara[i] > max)
            max = ara[i];
    }

    return max;

}

int min_func(int *ara,int n){

    int i,j,min;
    min = ara[0];

    for(i = 1;i < n;i++){
        if(ara[i] < min)
            min = ara[i];
    }

    return min;

}

