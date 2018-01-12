#include <stdio.h>


int GCD(int a, int b)
{
    if(b == 0)
        return a;
    else
        return GCD(b,a%b);
}

int main()
{
    int N,i,div[46340],k,n,gcd,c = 1; /// TLE + problem

    while(scanf("%d",&N) && N != 0){
        k = 0;
        n = N;
        for(i = 1;;i++){
            if(n == 0)
                break;
            if(n % i == 0)
                div[k++] = i;
            if(k > 1){
                gcd = GCD(div[k-2],div[k-1]);
                if( N == (div[k-2]*div[k-1])/gcd ){
                    printf("Case %d: %d\n",c++,div[k-2]+div[k-1]);
                    break;
                }
            }
        }


    }

    return 0;
}
