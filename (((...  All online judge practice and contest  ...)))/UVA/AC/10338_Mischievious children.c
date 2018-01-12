        /// input
/*

ICANTREALLYHELPU

*/

#include <stdio.h>
#include <string.h>
unsigned long long Fact(unsigned long long len);
int main()
{
    unsigned long long i,j,k,count,t,res,len;
    char word[25];
    unsigned long long check[25],ck,multi,fact;                /// AC

    scanf("%llu",&t);

    getchar();

    for(i = 1;i <= t;i++){

        scanf("%s",word);

        len = strlen(word);

        for(j = 0;j < len;j++)
            check[j] = 0;

        multi = 1;

        for(j = 0;j < len;j++){
            ck = 0;
            count = 1;
            for(k = j+1;k < len;k++){
                if(word[j] == word[k]){
                    if(check[j] == 1)
                        break;
                    else{
                        check[k] = 1;
                        ck = 1;
                        count++;
                    }
                }
            }

            fact = Fact(count);

            multi *= fact;
        }

        //printf("%llu ",multi);

        fact = Fact(len);
        //count = Fact(count);

        printf("Data set %llu: %llu\n",i,fact/multi);

        //printf("Data set %llu: %llu %llu\n",i,fact,count);

    }

    return 0;
}

unsigned long long Fact(unsigned long long len)
{
    if(len <= 0)
        return 1;
    else
        return len*Fact(len-1);
}
