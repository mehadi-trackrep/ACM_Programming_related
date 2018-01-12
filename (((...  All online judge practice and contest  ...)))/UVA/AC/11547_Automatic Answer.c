#include <stdio.h>
int main()
{
    int t,n,res,ch = 1,res1;

    scanf("%d",&t);

    while(ch <= t){

        scanf("%d",&n);

        res = n * 567;
        res = res / 9;
        res = res + 7492;
        res = res * 235;
        res = res / 47;
        res = res - 498; //printf("=> %d ",res);

        //if(res > 0){

            res1 = res / 10;
            res = res1 % 10;
       // }

        if(res < 0) {

            //res1 = res / -10;
            res = res*(-1);
        }

        printf("%d\n",res);

        ch++;
    }

    return 0;
}

