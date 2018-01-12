#include <stdio.h>
#include <stdbool.h>
//#include <string.h>

// marks all mutiples of 'a' ( greater than 'a' but less than equal to 'n') as 1.
void markMultiples(bool ara[], int a, int n)
{
    int i = 2, num;
    while ( (num = i*a) <= n )
    {
        ara[num] = 1; // num means multiple number of index starts from 0.
        ++i;
    }
}

// A function to print all prime numbers smaller than n
void SieveOfEratosthenes(int n)
{
    // There are no prime numbers smaller than 2
    if (n >= 2)
    {
        // Create an array of size n and initialize all elements as 0
        bool ara[n];
        int i;
        memset(ara, 0, sizeof(ara));

        /* Following property is maintained in the below for loop
           arr[i] == 0 means i is prime
           arr[i] == 1 means i is not prime */
        for (i=2; i<=n; ++i)
        {
            if ( ara[i] == 0 )
            {
                //(i) is prime, print it and mark its multiples
                printf("%d ", i);
                markMultiples(ara, i, n);
            }
        }
    }
}

// Driver Program to test above function
int main()
{
    int n;
    while(scanf("%d",&n) == 1)
    {
        printf("Following are the prime numbers below %d\n",n);
        SieveOfEratosthenes(n);
        printf("\n");
    }
    return 0;
}
