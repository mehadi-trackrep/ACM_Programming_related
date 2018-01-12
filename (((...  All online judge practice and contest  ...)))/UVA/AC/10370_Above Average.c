#include <stdio.h>
int main()
{
    int c,n,i,j,ara[1005],sum,ave,count;
    double perc;


    while(scanf("%d",&c) == 1){

        for(i = 0;i < c;i++){

            scanf("%d",&n);
            sum = 0;
            count = 0;

            for(j = 0;j < n;j++){
               scanf("%d",&ara[j]);
               sum = sum + ara[j];
            }

            ave = sum / n;

            for(j = 0;j < n;j++){

                if(ara[j] > ave)
                    count++;
                else ;
            }

            perc = ((double)count / (double)n ) * 100;

            printf("%.3lf%%\n",perc);
        }
    }

    return 0;
}

