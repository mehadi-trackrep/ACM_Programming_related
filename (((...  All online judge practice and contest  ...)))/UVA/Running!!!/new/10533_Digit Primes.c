#include <stdio.h>
#include <stdbool.h>

int primes[78100],total_prime;
int SieveOfEratosthenes(long long n);
int check_prime(long long n);

int main()
{
    long long N,t1,t2,i,j,total_primes,min,max,sum,k; /// problem , please debug
    int ck1,ck2;

    total_prime = SieveOfEratosthenes(1000000);

    scanf("%lld",&N);

    for(i = 1;i <= N;i++)
    {
        scanf("%lld%lld",&t1,&t2);

        total_primes = 0;

        min = (t1 < t2)? t1 : t2;
        max = (t1 > t2)? t1 : t2;

        for(j = min;j <= max;j++)
        {
            if(j % 2 == 0 && j != 2)
                continue;

            k = j;
            sum = 0;

            while(k != 0){
                sum += k%10;
                k /= 10;
            }

            ck1 = check_prime(j);
            ck2 = check_prime(sum);

           // printf("=>=> %lld %lld\n",j,sum);
            //printf("=>=> %d %d\n",ck1,ck2);

            if(ck1 == 1 && ck2 == 1)
                total_primes++;
        }

        printf("%lld\n",total_primes);
    }

    return 0;
}

int check_prime(long long n)
{
    int i;

    if(n == 1)
        return 0;

    for(i = 0;primes[i] <= n;i++){

        if(n == primes[i])
            return 1;
    }

    return 0;

}

void markMultiples(bool arr[], long long a,long long n)
{
    long long i = 2, num;

    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1; // minus 1 because index starts from 0.
        ++i;
    }
}

void markMultiples(bool arr[], long long a,long long n);
// A function to print all prime numbers smaller than n
int SieveOfEratosthenes(long long n)
{
    long long i,k = 0;
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        bool arr[n];
        memset(arr, 0, sizeof(arr));

        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
        for (i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                primes[k++] = i+1;
                //printf("%d ",i+1);

                markMultiples(arr, i+1, n);
            }
        }
    }

    return k;
}
