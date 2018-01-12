#include <stdio.h>
long int f91(long int n){

    if(n >= 101)
        return n-10;
    else if(n <= 100)
        return f91(f91(n + 11));

}

int main()  ///AC
{
    long int N,res;

    while(scanf("%ld",&N)){

        if(N == 0)
            break;
        else{
            res = f91(N);
            printf("f91(%ld) = %ld\n",N,res);
        }

    }

    return 0;
}

