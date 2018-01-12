#include <stdio.h>
int Isprime(long long n);
int main()
{
    int n,ck;

    scanf("%d",&n);

    ck = Isprime(n);

    if(ck == 1)
        printf("Prime\n");
    else
        printf("Not Prime\n");

    return 0;
}

int Isprime(long long n)
{
    int i,ck;

    if(n == 1)
        return 0;
    else if(n == 2)
        return 1;
    else if(n % 2 == 0)
        return 0;
    else{
        ck = 1;
        for(i = 3;i*i <= n;i+=2){
            if(n % i == 0){
                ck = 0;
                break;
            }
        }
        if(ck == 1)
            return 1;
        else
            return 0;
    }
}

