#include <stdio.h>
int main()
{
    long long int L,H,i,j,V,count = 0,max_value;

    while(scanf("%lld%lld",&L,&H)){

        if(L == 0 && H == 0)
            break;          ///.........

        else if(L > H){
            L = L^H;
            H = L^H;
            L = L^H;
        }

        max_value = 0;

        for(i = L;i <= H;i++){

            j = i;

            while(1){

                if(j%2 == 0)
                    j /= 2;
                else j = 3*j + 1;

                count++;

                if(j <= 1)
                    break;
            }

            if(count > max_value){
                max_value = count;
                V = i;
            }

            count = 0;
        }

        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",L,H,V,max_value);
    }

    return 0;
}
