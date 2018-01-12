#include <stdio.h>
int main()
{
    int t,a,b,i,c = 1,sum;

    while(scanf("%d",&t) == 1){

        while(t >= 1){

            sum = 0;

            scanf("%d%d",&a,&b);

            if(a%2 == 0)
                a = a+1;

            else if(b%2 == 0)
                b = b-1;
            if(a > b){
                a = a^b;
                b = a^b;
                a = a^b;
            }

            for(i = a;i <= b;i += 2){
                sum = sum + i;
            }

            printf("Case %d: %d\n",c++,sum);

            t--;
        }
    }

    return 0;
}

