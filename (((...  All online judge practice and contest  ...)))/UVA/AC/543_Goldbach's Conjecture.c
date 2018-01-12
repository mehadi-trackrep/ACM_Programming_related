#include <stdio.h>
#include <stdbool.h>
#define Max 1000000 /// 5 lakhs
bool com[Max]; /// com means composite number arr
int prime[78100],p_cnt = 0;
void markmultiples(int i){

    int j;

    for(j = i+i;j <= Max;j += i)
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
    int i,n,j;

    seive();

    while(scanf("%d",&n) && n != 0){
        for(i = 0;prime[i] < n;i++);
        j = i-1;
        i = 1;
        //printf("%d\n",j);
        while(1){
            if(prime[j]+prime[i] <= n){
                if(prime[j]+prime[i] == n){
                    printf("%d = %d + %d\n",n,prime[i],prime[j]);
                    break;
                }
                else
                    i++;
            }
            else
                j--;
        }
    }

    return 0;
}
