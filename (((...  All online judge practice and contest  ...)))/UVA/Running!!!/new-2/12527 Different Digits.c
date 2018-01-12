#include <stdio.h>
#include <string.h>
int main()
{
    int i,x,a,b,k,l,ck,j;
    int ara[5],num[5000],sum;


    while(scanf("%d%d",&a,&b)==2)
    {
        if(a > b)    /// alawys a < b
        {
            printf("0\n");
            continue;
        }
        sum = 0;
        for(i = a; i <= b; i++)
        {
            x = i;
            k = 0;
            while(x >= 1)
            {
                ara[k++] = x % 10;
                x /= 10;
            }
            if(k <= 1){
                sum += 1;
                continue;
            }
            ck = 0;
            for(j = 0; j < k; j++)
            {
                for(l = j+1; l < k; l++)
                {
                    if(ara[j] == ara[l])
                    {
                        ck = 1;
                        break;
                    }
                }
                if(ck == 1)
                    break;
            }

            if(ck == 0)
                sum += 1;
        }
        printf("%d\n",sum);
    }

    return 0;
}
