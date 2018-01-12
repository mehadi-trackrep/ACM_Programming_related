
/// summation of 1 to n by recursive

#include <stdio.h>
int funct1(int n);
int main()
{
    int n = 10;
    printf("%d",funct1(n));

    return 0;
}

int funct1(int n)
{
    if(n > 0)
        return (n + funct1(n-1));
}
