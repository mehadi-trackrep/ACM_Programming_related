#include <stdio.h>
int main()
{
    long int n,m,i,price[100005],j,k,l,d;

    while(scanf("%ld",&n) == 1){

        for(i = 0;i < n;i++)
            scanf("%ld",&price[i]);

        scanf("%ld",&m);

        d = 2000000;

        for(i = 0;i < n;i++)
        {
            for(j = i+1;j < n;j++)
            {
                if(price[i] + price[j] == m){
                    if(price[i] > price[j]){
                        if(price[i]-price[j] < d){
                            k = price[j];
                            l = price[i];
                            d = price[i]-price[j];
                        }
                    }
                    else{
                        if(price[j]-price[i] < d){
                            k = price[i];
                            l = price[j];
                            d = price[j]-price[i];
                        }
                    }
                }
            }
        }

        printf("Peter should buy books whose prices are %ld and %ld.\n\n",k,l);  /// must double new line
    }

    return 0;
}
