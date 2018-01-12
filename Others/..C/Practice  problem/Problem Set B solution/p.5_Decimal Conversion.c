#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
int main()
{
    int len,i,p,sum = 0;
    char ara[100];
    gets(ara);
    len = strlen(ara);           /// printf("%d",len);
    for(i=len-1;i>=0;i--){
                                ///printf("%d",ara[i]-48);

        if(ara[i]-48 == 1){
            p = len-i-1;        /// printf("%d ",p);
            sum = sum + pow(2,p);
        }
    }

    printf("%d",sum);

    return 0;
}

