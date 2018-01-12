#include <stdio.h>

int total_cola(int n)
{
    if(n == 1)
        return 1;

    n /= 3;

    if(n % 3 == 0)
        return n + total_cola(n);
    else
        return n + total_cola(n%3 + n);
}

int main()
{
    int n;

    while(scanf("%d",&n) == 1){
        printf("%d\n",total_cola(n));
    }

    return 0;
}
