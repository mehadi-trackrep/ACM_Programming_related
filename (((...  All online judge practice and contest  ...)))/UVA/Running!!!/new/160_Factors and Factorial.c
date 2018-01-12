#include <stdio.h>
int main()
{
    int prime[] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int fact[100][25],i,j,k = 2,index,count,n,p,l;

    for(i = 2;i <= 100;i++){
        n = i;
        index = 0;
        for(j = 0;j <= 24 && prime[j] <= n;j++){ /// 97 er prime factorization a problem ace...
            count = 0;
            while(n % prime[j] == 0){
                count++;
                n /= prime[j];
            }
            fact[i][index++] = count;
        }
        fact[i][index] = -1;
        //k++;
    }

    /*for(i = 2;i <= 100;i++){
        for(j = i;j <= 2;j--){

        }
    }*/

    //printf("%d %d",prime[24],prime[0]);

    while(scanf("%d",&p) == 1){
        printf("%d! =",p);
        for(i = 0;fact[p][i] != -1;i++){
            printf(" %d",fact[p][i]);
        }
        printf("\n");
    }

    return 0;
}
