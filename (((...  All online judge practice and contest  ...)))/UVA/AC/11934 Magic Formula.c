#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,L,count,i;
    double sum;

    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&L))
    {
        if(a == 0 && b == 0 && c == 0 && d == 0 && L == 0)
            break;

        count = 0;

        for(i = 0;i <= L;i++){
            sum = (double)a*pow((double)i,2.0) + (double)b*(double)i + (double)c;
            if((int)sum % d == 0)
                count++;
        }
        printf("%d\n",count);
    }

    return 0;
}
