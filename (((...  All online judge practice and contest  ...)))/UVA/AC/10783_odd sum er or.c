#include <stdio.h>
int main()
{
    int t,a,b,i,c = 1,sum;

    while(scanf("%d",&t) == 1){

        while(t >= 1){

            sum = 0;

            scanf("%d%d",&a,&b);

            if(a > b){
                a = a^b;
                b = a^b;
                a = a^b;
            }

            for(i = a;i <= b;i += 2){

                if(i % 2 == 0);

                else
                    sum = sum + i;
            }

            printf("Case %d: %d\n",c++,sum);

            t--;
        }
    }

    return 0;
}


