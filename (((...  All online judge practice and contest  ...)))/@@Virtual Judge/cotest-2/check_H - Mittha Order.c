#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define Max 1000
bool com[Max];
int total[Max],ara1[Max];

int check_number_of_divisors(int n);    ///AC
void seive();

int main()
{
    int i,j;

    memset(total,0,sizeof(total));

    seive();

    for(i = 1;i <= Max;i++){
        ara1[i] = i;
                        /// total tai divisors hisebe kaj korbe...
        if(total[i] == 1)
            total[i] = 2;
        else
            total[i] = check_number_of_divisors(i);
    }

    /*for(i = 1;i <= Max;i++){
        printf("%d ",total[i]);
    }*/

    for(i = 1 ; i <= Max ; i++){
        for(j = i+1 ; j <= Max ;j++){
            if(total[i] > total[j]){

                total[i] = total[i] ^ total[j];
                total[j] = total[i] ^ total[j];
                total[i] = total[i] ^ total[j];

                ara1[i] = ara1[i] ^ ara1[j];
                ara1[j] = ara1[i] ^ ara1[j];
                ara1[i] = ara1[i] ^ ara1[j];
            }

            else if(total[i] == total[j]){
                if(j > i){
                    ara1[i] = ara1[i] ^ ara1[j];
                    ara1[j] = ara1[i] ^ ara1[j];
                    ara1[i] = ara1[i] ^ ara1[j];
                }
            }
        }
    }

    int t,x,c = 1;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&x);
        printf("Case %d: %d\n",c++,ara1[x]);
    }

    return 0;
}

int check_number_of_divisors(int n)
{
    int i,count = 0;
    for(i = 1;i*i<= n;i++){
        if(n % i == 0)
            count++;
    }
    if((double)sqrt(n) - (int)sqrt(n) == 0)
        return 2*count-1;
    else
        return 2*count;
}


void markmultiples(int i){

    int j;

    for(j = i+i;j <= Max;j += i)
        com[j] = true;

}
void seive(){

    com[0] = true;
    com[1] = true;
    markmultiples(2);

    total[2] = 1;

    int i;

    for(i = 3;i <= Max;i += 2){
        if(!com[i]){
            markmultiples(i);
            total[i] = 1;
        }
    }

}
