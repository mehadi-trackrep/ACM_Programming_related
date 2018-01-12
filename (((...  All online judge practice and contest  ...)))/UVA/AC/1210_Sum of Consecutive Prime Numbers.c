#include <stdio.h>
int prime[1250];
int prime_list(int n);
int main()
{
    int i,j,n,total_prime,count,sum;

    while(scanf("%d",&n) == 1 && n != 0)
    {
        total_prime = prime_list(n);
        count = 0;

        for(i = 0;i < total_prime;i++)
        {
            sum = 0;

            for(j = i;j < total_prime;j++)
            {
                sum += prime[j];
               // printf("%d + ",prime[j]);
                if(sum == n){
                    count++;
                    break;
                }

                else if(sum > n)
                    break;
            }

            //printf("\n");
        }

        printf("%d\n",count);

    }

    return 0;
}

int prime_list(int n)
{
    int i,j,k = 1,total_prime = 1,ck;

    prime[0] = 2;

    for(i = 3; i <= n;i += 2)
    {
        ck = 1;

        for(j = 3; j*j <= i;j += 2)
        {
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
