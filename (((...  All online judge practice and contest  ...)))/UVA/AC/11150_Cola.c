#include <stdio.h>
int main()
{

    int n,i,total,empty,k = 0;

    while(scanf("%d",&n) == 1){

        total = n;
        empty = n+1;
        //k = 0;
        while (n > 0) {
          n = empty / 3;
          empty %= 3;
          total += n;
          empty += n;
          //k++;

        }
        printf("%d\n",total);
    }

    return 0;
}
