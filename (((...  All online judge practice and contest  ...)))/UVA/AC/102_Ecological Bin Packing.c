        /// input:
/*

1 2 3 4 5 6 7 8 9
5 10 5 20 10 5 10 20 10

*/
#include <stdio.h>
int main()
{
    long int ara[7],a[5],b[5],c[5],i,min;

    while(scanf("%ld%ld%ld%ld%ld%ld%ld%ld%ld",&a[0],&a[1],&a[2],&b[0],&b[1],&b[2],&c[0],&c[1],&c[2]) == 9){

        ara[0] = a[1]+a[2] + b[0]+b[1] + c[0]+c[2];
        ara[1] = a[1]+a[2] + b[0]+b[2] + c[0]+c[1];
        ara[2] = a[0]+a[1] + b[1]+b[2] + c[0]+c[2];
        ara[3] = a[0]+a[1] + b[0]+b[2] + c[1]+c[2];
        ara[4] = a[0]+a[2] + b[1]+b[2] + c[0]+c[1];
        ara[5] = a[0]+a[2] + b[0]+b[1] + c[1]+c[2];

        min = ara[0];

        for(i = 1;i <= 5;i++){
            if(ara[i] < min)
                min = ara[i];
        }

        if(min == ara[0])
            printf("BCG %ld\n",min);
        else if(min == ara[1])
            printf("BGC %ld\n",min);
        else if(min == ara[2])
            printf("CBG %ld\n",min);
        else if(min == ara[3])
            printf("CGB %ld\n",min);
        else if(min == ara[4])
            printf("GBC %ld\n",min);
        else if(min == ara[5])
            printf("GCB %ld\n",min);


    }

    return 0;
}
