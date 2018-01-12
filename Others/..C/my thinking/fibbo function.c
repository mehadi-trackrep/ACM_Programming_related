#include <stdio.h>
int fibbo(int n);
int m;
int main()
{
    int c;
    scanf("%d",&m);
    c = fibbo(m);
    printf("%d",c);

    return 0;
}

int fibbo(int n)
{
    int a = 0,b = 1,c,i;

    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;

    for(i = 2;i <= n;i++){
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}
