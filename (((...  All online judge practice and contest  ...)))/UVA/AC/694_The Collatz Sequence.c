#include <stdio.h>
int main()
{
    long long A,L,count,i,j,c = 1; /// c = case number

    while(scanf("%lld%lld",&A,&L)){

        if(A < 0 && L < 0)
            break;

        count = 1;
        j = A;

        while(1){

            if(j == 1)
                break;

            if(j%2 == 0)
                j = j/2;

            else j = 3*j + 1;

            if(j > L)
                break;

            count++;
        }

        printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",c++,A,L,count);
    }

    return 0;
}

