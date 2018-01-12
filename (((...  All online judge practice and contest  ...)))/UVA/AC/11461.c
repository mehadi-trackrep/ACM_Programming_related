#include <stdio.h>
#include <math.h>
int main()
{
    long int a,b,i,count,ck2,min,max;
    double ck1;

    while(scanf("%ld%ld",&a,&b)){

        if(a == 0 && b == 0)
            break;

        count = 0;
        min = (a < b)? a : b;
        max = (a < b)? b : a;

        for(i = min ; i <= max ; i++){

            ck1 = sqrt( (double)i );
            ck2 = (int)ck1;

            if( ck1 == ck2 )
                count++;
        }
        printf("%ld\n",count);
    }

    return 0;
}

