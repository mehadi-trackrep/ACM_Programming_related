#include <stdio.h>
int gcd(int a,int b);
int main()
{
    int i,j,N;
    long long G;

    while(scanf("%d",&N) == 1 && N != 0){  /// TLE khaici...

        G = 0;

        for(i = 1;i < N;i++){
            for(j = i+1;j <= N;j++)
                G += gcd(i,j);
        }

        printf("%lld\n",G);

    }

    return 0;
}

int gcd(int a,int b)
{
    int rem;

    while(1){
        rem = a%b;
        if(rem == 0)
            return b;
        else{
            a = b;
            b = rem;
        }
    }
}
