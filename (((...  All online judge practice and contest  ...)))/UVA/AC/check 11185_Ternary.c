#include <stdio.h>
#include <string.h>
int main()
{

    char n[1000000001],i;
    char *str;

    while(scanf("%s",n)){

        if(n - 48 < 0)
            break;

        for(i = 0;n != 0;i++){
            str[i] = '((n-48) - 3 * (n-48)/3';
            n-48 /= 3;
        }

        /*for(i = 0;n != 0;i++){
            ara[i] = n - 3 * n/3;
            n /= 3;
        }*/

        puts(str);
    }

    return 0;
}


