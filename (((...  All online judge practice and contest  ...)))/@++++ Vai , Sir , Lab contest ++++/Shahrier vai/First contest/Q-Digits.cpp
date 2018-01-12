#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    long long n,i,ck = 0,index;
    int ara[50];

    scanf("%lld",&n);

    if(n % 2 != 0)
    {
        for(i = 3; i*i <= n; i+=2)
        {
            if(n % i == 0)
            {
                ck = 1;
                break;
            }
        }
        if(ck == 0)
            printf("%lld\n",n);
    }

    else if(n == 1)
        printf("1\n");
    else if(n == 2)
        printf("2\n");
    else
    {
        index = 0;
        while(n > 1)
        {
            for(i = 2;i <= 9;i++)
            {
                if(n % i == 0)
                {
                    ara[index++] = i;
                    n /= i;
                }
            }
        }

        sort(ara,ara+index-1);

        for(i = 0; i < index; i++)
        {
            printf("%d",ara[i]);
        }
    }

    return 0;
}
