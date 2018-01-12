#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char num[15];
    long long t,n,i,len;
    double x,sum = 0.0;

    scanf("%lld",&t);

    getchar();

    while(t--)
    {

        scanf("%s",num);
        len = strlen(num);
        //scanf("%lld",&n);
        n = 0;
        sum = 0;
        for(i = 0; i < len; i++)
            n = n*10 + (int)num[i]-48;
        //printf("%lld  ",n);
        for(i = 0; i < len; i++){
            x = (double)((int)num[i]-48);
            sum += pow(x,(double)len);
        }

        if((double)n == sum)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n");

    }

    return 0;
}
