#include <stdio.h>
#include <stdbool.h>
#define Max 10000
bool com[Max]; /// com means composite number arr
int prime[1250],p_cnt = 0;
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
    int i,n,t,p,x;

    seive();

    scanf("%d",&t);

    while(t--){
        p = 1;
        scanf("%d",&n);
        for(i = 0;;i++){
            x = prime[i];
            if(p*x <= n && n < (p+1)*x){
                printf("%d\n",prime[i]);
                break;
            }
        }
    }

    return 0;
}

