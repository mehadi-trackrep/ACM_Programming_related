#include <cstdio>
#include <iostream>
using namespace std;

void print(int n)
{
    if(n == 1)
        return ;
    else
        printf("%d ",n); /// return deyoa te porer statement gula ar check korbe na...
    printf("=> %d\n",n);

    return print(n-1);

    printf("==> %d\n",n);
}

int main()
{
    print(4);
    return 0;
}

