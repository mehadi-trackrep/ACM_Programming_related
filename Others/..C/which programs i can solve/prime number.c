
/// 1 to n  prime numbers generates :-

#include <stdio.h>
#include <math.h>
int main()
{
    long long n,i,j,ch = 0;

    scanf("%lld",&n);

    printf("2\n3\n");

    for(i = 5;i < n;i += 2){
        for(j = 3;j < sqrt(i); j += 2){
            if(i % j == 0){
                ch++;
                break;
            }
        }

        if(ch == 0)
            printf("%lld\n",i);

        ch = 0;
    }

    return 0;
}
