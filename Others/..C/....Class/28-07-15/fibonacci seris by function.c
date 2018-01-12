#include <stdio.h>

int fibo(int n); /// prototype ///

int main()
{
    int n;
    scanf("%d",&n);

    printf("%d",fibo(n));

    return 0;
}

int fibo(int n)
{
    int i,b = 0,c = 1,x;
    if(n == 1) return 0;
    else if(n == 2) return 1;
    else {
        for(i=2;i<=n;i++){
            x = b + c;
            b = c;
            c = x;
        }
    }
    return c;
}

