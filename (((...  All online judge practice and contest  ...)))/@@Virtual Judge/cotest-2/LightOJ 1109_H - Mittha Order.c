#include <stdio.h>
#include <math.h>
int check_number_of_divisors(int n);
int main()
{
    int ara1[1030],ara2[1030];
    int x,t,n,i,j,c = 1;


    n = 1000;

    for(i = 1;i <= n;i++){
        ara1[i] = i;
        ara2[i] = check_number_of_divisors(i);  /// AC
    }

    for(i = 1 ; i <= n-1 ; i++){
        for(j = i+1 ; j <= n ;j++){
            if(ara2[i] > ara2[j]){

                ara2[i] = ara2[i] ^ ara2[j];
                ara2[j] = ara2[i] ^ ara2[j];
                ara2[i] = ara2[i] ^ ara2[j];

                ara1[i] = ara1[i] ^ ara1[j];
                ara1[j] = ara1[i] ^ ara1[j];
                ara1[i] = ara1[i] ^ ara1[j];
            }
            else if(ara2[i] == ara2[j]){
                if(j > i){
                    ara1[i] = ara1[i] ^ ara1[j];
                    ara1[j] = ara1[i] ^ ara1[j];
                    ara1[i] = ara1[i] ^ ara1[j];
                }
            }
        }
    }

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
