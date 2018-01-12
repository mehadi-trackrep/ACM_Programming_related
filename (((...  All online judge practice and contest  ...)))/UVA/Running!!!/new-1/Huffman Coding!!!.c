        /// input:
/*
17
7 6 60 70 78 44 86 21 7 11 33 44 93 87 68 72 92
*/

#include <stdio.h>
int ara[100][100];
void bubble_sort(int l,int k);
int main()
{
    int i,j,k,n,l;
    int sum;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&ara[0][i]);
    k = n;
    sum = 0;
    bubble_sort(0,k);
    for(i = 0;;i++){
        l = 0;
        for(j = 0;j < k;j += 2){
            if(k <= 1){
                sum += ara[i][j];
                continue;
            }
            sum += ara[i][j] + ara[i][j+1];
            ara[i+1][l++] = ara[i][j] + ara[i][j+1];
            printf(" %d ",ara[i+1][l-1]);
        }
        printf("\n");
        if(k % 2 != 0)
            ara[i+1][l] = ara[i][k];
        k = l;
        if(k <= 1)
            break;
        bubble_sort(i+1,k);
    }

    printf("\n%d",sum);

    return 0;
}

void bubble_sort(int l,int k){

    int i,j;

    for(i = 0 ; i < k ; i++){
        for(j = i+1 ; j < k ;j++){
            if(ara[l][i] > ara[l][j]){

                ara[l][i] = ara[l][i] ^ ara[l][j];
                ara[l][i] = ara[l][i] ^ ara[l][j];
                ara[l][i] = ara[l][i] ^ ara[l][j];

            }
        }
    }

}
