#include <cstdio>
#include <iostream>
using namespace std;

void print(int n)
{
    if(n == 1)
        return ;
    else
        printf("%d ",n);
    printf("=> %d\n",n);

    print(n-1); /// return na dile porer statement gula check korbe , jokhon se
                /// return pabe , tar por theke main function a jayar ag porjonto
                /// protibar porer statement gualar kaj korbe...

    printf("==> %d\n",n);
}

int main()
{
    print(4);
    return 0;
}
