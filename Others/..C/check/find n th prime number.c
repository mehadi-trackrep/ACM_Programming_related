#include <stdio.h>
int nthprime(int n);
int main()
{
    int n,m;

    scanf("%d",&n);

    m = nthprime(n);

    printf("%d",m);

    return 0;

}

int nthprime(int n){


    if(n==1) return 2;
    else if(n==2) return 3;
    else if(nthprime(n-1)%2==0 || nthprime(n-1)%3==0 || nthprime(n-1)%5==0 || nthprime(n-1)%7==0) return nthprime(n-1)+2;

    return nthprime(n-1);

}
