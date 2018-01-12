#include <stdio.h>
int main()
{
    int t,n,i,j,price;
    int max_discount;

    while(scanf("%d",&t) == 1){
        for(i = 0;i < t;i++){

            max_discount = 0;
            scanf("%d",&n);

            for(j = 0;j < n;j++){ /// check corner case

                scanf("%d",&price); /// problem

                if(price > max_discount)
                    max_discount = price;
            }

            printf("%d\n",max_discount);
        }
    }

    return 0;
}

