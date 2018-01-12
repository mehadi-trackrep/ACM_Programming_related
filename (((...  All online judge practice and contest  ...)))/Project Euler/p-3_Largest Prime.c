#include <stdio.h>
#include <stdbool.h>
#define Max 46340
bool com[Max]; /// com means composite number arr
int prime[4765],p_cnt = 1;
void markmultiples(int i){

    int j;

    for(j = i+i;j <= Max;j += i)  /// complete
        com[j] = true;

}
void seive(){

    com[0] = true;
    com[1] = true;
    markmultiples(2);
    prime[p_cnt++] = 2;

    int i;

    for(i = 3;i <= Max;i += 2){
        if(!com[i]){
            markmultiples(i);
            prime[p_cnt++] = i;
        }
    }

}



int main()
{
    int i,n,ck,max;

    seive();

    /*for(i = 0;i < p_cnt;i++)
        printf("%d ",prime[i]);*/

    while(scanf("%d",&n) && n != 0){

        printf("%d =",n);

        ck = 0;

        if(n < 0){
            printf(" -1");
            n *= (-1);
            ck = 1;
        }
        else if(n == 1)
            printf(" 1");

        //printf("%d %d\n",n,max);;

        for(i = 1; ( prime[i]*prime[i] <= n ) && i <= p_cnt ;++i){   /// v.v.i. i <= p_cnt lekhar karon,
                                                                    /// na likhle output limit cross kore
                // problem : prime number arr er index 0 theke nile , 1 theke
                                                                //   nite hobe .
            while(n % prime[i] == 0){

                if(ck == 1)
                    printf(" x %d",prime[i]);
                //else if(ck == 0 && (n % prime[i]) == 0){
                else
                    printf(" %d",prime[i]);

                ck = 1;
                n /= prime[i];
            }
        }

        if (n > 1)
        {
            if (ck == 1)
                printf(" x %d", n);
            else
                printf(" %d", n);
        }

        printf("\n");

    }

    return 0;
}
