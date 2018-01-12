#include<stdio.h>

int main()
{
    long int  a[12],t,n, i,j, mod,m,k,l;
    while(scanf("%ld",&t) == 1)
    {
        for(i = 1;i <= t;i++)
        {
            for(l = 0;l < 10;l++)
                a[l] = 0;

            scanf("%ld",&n);

            for(j = 1;j <= n;j++)
            {
                m = j;

                while(m != 0)
                {
                    mod = m%10;
                    m /= 10;
                    a[mod] += 1; /// mod index
                }
            }

            for(k = 0;k < 9;k++)
            {
                printf("%ld ",a[k]);
            }

            printf("%ld\n",a[9]);

        }
    }

    return 0;
}
