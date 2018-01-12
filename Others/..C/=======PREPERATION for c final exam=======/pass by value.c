#include <stdio.h>

int x = 5,y = 10; /// Global declaration

void swap(int *a,int *b){

    int c;
    c = *a;
    *a = *b;
    *b = c;

}

int main(){

    swap(&x,&y);

    printf("%d %d",x,y);

    return 0;

}
