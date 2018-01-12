#include <stdio.h>
#include <stdbool.h>
#define Max 1000000
bool com[Max]; /// com means composite number arr
int prime[78100],p_cnt = 1;
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
    int i,n,ck,max,count,j,count1,rem;
    char ch;

    seive();

    while(scanf("%d",&n) && n != 0){

        rem = n;
        count = 1;

        for(i = 1; ( prime[i]*prime[i] <= n ) && i <= p_cnt ;++i){
            ck = 0;
            while(n % prime[i] == 0){
                ck = 1;
                n /= prime[i];
            }
            if(ck == 1)
                count++;
        }
        printf("%d : %d\n",rem,count);
    }

    return 0;
}

