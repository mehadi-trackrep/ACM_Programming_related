#include <stdio.h>

int fibo(int m); /// prototype ///

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));
    return 0;
}

int fibo(int m)
{
    if(m == 0) return 0;
    else if(m == 1) return 1;
    else return fibo(m-1) + fibo(m-2);   /* fibo(m) = fibo(m-1) + fibo(m-2)
                                               = (fibo(m-2) + fibo(m-3)) + (fibo(n-3) + fibo(n-4))
                                               ... fibo(1) and fibo(0) porjonto */
}

