#include <stdio.h>
int main()
{
    long long int a,b,count,i,j,max_count,value;

    while(scanf("%lld%lld",&a,&b)==2){

        max_count = 1;

        printf("%lld %lld ",a,b);

        if(a>b){

            a = a^b;
            b = a^b;
            a = a^b;
        }
        else ;

        for(i=a;i<=b;i++){

            count = 1;

            j = i;

            while(j > 1){

                if(j%2==0)
                    j = j/2;

                else j = 3*j + 1;

                count++;

            }

            if(count > max_count){

                max_count = count;
                //value = i;
            }
        }

        printf("%lld\n",max_count);
       // printf("%d %d %d ,value = %d\n",a,b,max_count,value);
    }

    return 0;
}
