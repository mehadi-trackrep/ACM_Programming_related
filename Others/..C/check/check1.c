#include <stdio.h>
int main()
{

    int n,count,sum;
    int c = 1,ck;

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

        printf("Case %d: %d\n",c++,count);
    }

    return 0;
}


