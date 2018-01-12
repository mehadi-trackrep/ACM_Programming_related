#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define Max 1000000

bool com[Max];
int prime[78100],p_cnt = 1;
int fact[1000],power[1000];
void seive();
int prime_fact(int n);

int main()
{
    seive();
    int i,n,total_fact,a,b,j,min_number;        ///AC
    double triviality,min,multi = 1.0;

    /*scanf("%d",&n);
    total_fact = prime_fact(n);printf("%d \n",total_fact);
    for(i = 0;i < total_fact;i++)
        printf("prime factor = %d , power = %d\n",fact[i],power[i]);*/


    scanf("%d%d",&a,&b);

    if(a > b){
        a = a^b;
        b = a^b;
        a = a^b;
    }
    min = 10000.0;
    for(i = a;i <= b;i++){
        multi = 1.0;
        total_fact = prime_fact(i);//printf("=>%d %d\n",i,total_fact);
        for(j = 0;j < total_fact;j++){
            multi *= ( pow( (double)fact[j],((double)power[j]+1) ) - 1)/((double)fact[0]-1);
            //printf("%lf ",multi);
        }
        triviality = multi/(double)i; //printf("triviality => %lf\n",triviality);
        if(triviality < min){
            min = triviality;
            min_number = i;
        }
        //printf("\n");
    }

    printf("%d\n",min_number);

    return 0;
}

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

int prime_fact(int n)
{
    int i,total_fact = 0,k1 = 0,k2 = 0,count;

    for(i = 1; ( prime[i]*prime[i] <= n ) ;++i){
        if(n % prime[i] == 0){
            fact[k1++] = prime[i];
            count = 0;
            while(n % prime[i] == 0){
                count++;
                n /= prime[i];
            }
            power[k2++] = count;
        }
    }

    if(n > 1){
        fact[k1++] = n;
        power[k2++] = 1;
    }

    total_fact = k1;  /// k1 == k2

    return total_fact;
}
