#include <stdio.h>
int check[1000000];
int main()
{

    int i,j,sum,n;
    for(i = 1;i <= 1000005;i++)
        check[i] = 1;
    for(i = 1;i <= 1000000;i++){
            n = i;
            sum = i;
            while(n >= 1){
                sum += n % 10;
                n /= 10;
            }
            check[sum] = 0;
    }
    for(i = 1;i <= 1000000;i++){
        if(check[i] == 1)
            printf("%d\n",i);
    }
    return 0;
}
