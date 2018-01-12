#include<algorithm>
#include<cstdio>
using namespace std;
long int ara[2000005],i,n;
int main()
{
    while (scanf("%ld",&n)!=EOF)
    {
        if (n == 0)
        {
            break;
        }
        for (i = 0;i < n;i++)
        {
            scanf("%ld",&ara[i]);
        }
        sort(ara,ara+n);
        for (i = 0; i < n-1;i++)
        {
            printf("%ld ",ara[i]);

        }
        printf("%ld\n",ara[i]);
    }
    return 0;
}
