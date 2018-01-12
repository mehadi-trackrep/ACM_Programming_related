#include <stdio.h>
int main()
{

    int n,count,sum;
    int i,c = 1,ck;

    while(scanf("%d",&n)){

        if(n < 0)
            break;

        else if(n == 1){
            printf("Case %d: 0\n",c++);
            continue;
        }

        count = 0;

        for(sum = 1;;){
            sum += sum;
            if(sum < n){
                count++;
                continue;
            }
            else {
                count++;
                break;
            }
        }

        /* or,

        count = 1;
        sum = 1;

        for(i = 0;;i++){
            sum *= 2;
            count++;
            if(sum > n)
                break;
        }
        printf("Case %d: %d\n",c++,count-1);

        */

        printf("Case %d: %d\n",c++,count);
    }

    return 0;
}


