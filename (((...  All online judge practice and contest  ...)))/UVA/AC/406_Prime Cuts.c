#include <stdio.h>
int prime[175];
int store_prime(int n);
int main()
{
    int N,C,total_prime,i,j,k,ck;
    int min_index;

    while(scanf("%d%d",&N,&C) == 2)
    {
        printf("%d %d:",N,C);

        total_prime = store_prime(N);

        int c = (total_prime % 2)? C * 2 - 1 : C * 2; /// get size of printed list

        int s = (total_prime - c) > 0? (total_prime - c) / 2 : 0; /// calc start index
        int e = (total_prime - c) > 0? s + c : total_prime; /// calc end index

        for( j = s; j < e; j++)
            printf(" %d", prime[j]);
        printf("\n\n");
    }

    return 0;
}

int store_prime(int n)
{
    int i,total_prime,k,ck,j;

    if(n == 1){
        prime[0] = 1;
        total_prime = 1;
        return total_prime;
    }
    else if(n == 2){
        prime[0] = 1;
        prime[1] = 2;
        total_prime = 2;
        return total_prime;
    }

    total_prime = 2;
    k = 2;
    prime[0] = 1;
    prime[1] = 2;

    for(i = 3;i <= n;i += 2){
        ck = 1;
        for(j = 3; j*j <= i;j += 2){
            if(i % j == 0){
                ck = 0;
                break;
            }
        }
        if(ck != 0){
            prime[k++] = i;
            total_prime++;
        }
    }

    return total_prime;
}
