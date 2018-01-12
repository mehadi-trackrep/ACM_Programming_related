#include <stdio.h>
#include <math.h>
int GCD(int a, int b);
int main()
{

    int N,i,ara[55],j,count1,count2;
    int ck;
    double x;

    while(scanf("%d",&N)){

        if(N == 0)
            break;

        for(i = 0;i < N;i++)
            scanf("%d",&ara[i]);

        count1 = 0;
        count2 = 0;

        for(i = 0;i < N-1;i++){

            for(j = i+1;j < N;j++){

                ck = GCD(ara[i] , ara[j]);

                if(ck == 1)
                    count1++; /// count1 is the number of the pairs that's GCD 1

                count2++; /// total pair
            }

        }   //printf("count1 => %d ",count1);printf("count2 => %d ",count2);

        if(count1 == 0)
            printf("No estimate for this data set.\n");

        else{
            x = 6.0 / ( (double)count1/(double)count2 ); //printf("x => %lf, ",x);
            printf("%.6lf\n",sqrt(x));
        }
    }

    return 0;
}

int GCD(int a, int b){

   int rem;
   while(1)
   {
       rem = a%b;
       if(rem == 0)
           break;
       a = b;
       b = rem;
   }
   return b;

}
