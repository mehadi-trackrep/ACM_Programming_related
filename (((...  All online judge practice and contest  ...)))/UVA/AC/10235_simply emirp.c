#include <stdio.h>
#include <math.h>
long int rev(long int a){

    long int p,q = 0;

    while(a >= 1){
        p = (a % 10) + q;
        q = p * 10;
        a /= 10;
    }

    return p;
}

int isprime_Emirp(long int a,long int b){    /// using Function ///

    int i,j,ck = 1;

    if(a == 1)
        return 0;
    else if(a == 2)
        return 1;
    else if( a != 2 && a%2 == 0)
        return 0;
    else {
        for(i = 3;i <= sqrt((double)a);i += 2){
            if(a % i == 0){
                ck = 0;
                break;
            }
        }
        if(ck == 0)
            return 0;
        else {
            if( b != 2 && b%2 == 0)
                return 1;
            else {
                for(i = 3;i <= sqrt((double)b);i += 2){
                    if(b % i == 0){
                        ck = 0;
                        break;
                    }
                }

                if(ck == 0)
                    return 1;

                else{

                    if(a == b)
                        return 1;
                    else
                        return 11;
                }
            }

        }
    }

}

long int rev(long int a);
int isprime_Emirp(long int a,long int b);

int main()
{
    long int n,i,o,b;
    while(scanf("%ld",&n) == 1){

        o = rev(n);
        b = isprime_Emirp(n,o);

        if(b == 0)
            printf("%ld is not prime.\n",n);
        else if(b == 1)
            printf("%ld is prime.\n",n);
        else
            printf("%ld is emirp.\n",n);
    }

    return 0;
}

