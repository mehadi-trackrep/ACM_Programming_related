#include <stdio.h>

long long int fact(int n); /// prototype ///

int main()
{
    int n;
    scanf("%d",&n);

    printf("%lu",fact(n));

    return 0;
}

long long int fact(int n)
{
    if(n<=1) return 1;
    return n*fact(n-1); /* n! = n*(n-1)!
                           = n*(n-1)*(n-2)!
                           = n*(n-1)*(n-2)*(n-3)!
                           ...
                           = n*(n-1)*(n-2)*(n-3)*...*1; */
}

