#include <stdio.h>
int main(){

    int fact=1,i;
    for(i=1;i<=100;i++)
    {
        fact=((fact%101)*(i%101))%101;

    }

    printf("%d\n",fact);

}
