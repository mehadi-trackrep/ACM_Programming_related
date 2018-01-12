#include <stdio.h>
long int main_ara[2000005];
int main()
{
    long int n,max = 0,count;  /// by using counting sort
    long int i,j,k;

    while(scanf("%ld",&n) == 1 && n != 0){

        for(i = 0;i < n;i++){
            scanf("%ld",&main_ara[i]);  /// v.v.v.i.
            if(main_ara[i] > max)
                max = main_ara[i];
        }

        int auxi_ara[max+5],sorted_ara[n];

        for(i = 0;i <= max;i++)
            auxi_ara[i] = 0;

        /// step 2

        for(i = 0;i <= max;i++){

            count = 0;

            for(j = 0;j < n;j++){
                if(i == main_ara[j])
                    count++;
            }

            auxi_ara[i] = count;
        }

        /// step 3

        k = 0;

        for(i = 0;i <= max;i++){
            if(auxi_ara[i] != 0){
                j = auxi_ara[i];
                while(j >= 1){
                    sorted_ara[k++] = i;
                    j--;
                }
            }
        }

        for(j = 0;j < n-1;j++)
            printf("%ld ",sorted_ara[j]);
        printf("%ld\n",sorted_ara[j]);
    }

    return 0;
}


