#include <stdio.h>
int mat[1005][1005];
int n,m;
int max_one_zero(int a);
int main()
{
    int i,j;
    scanf("%d%d",&n,&m);

    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++)
            scanf("%d",&mat[i][j]);
    }

    printf("Number of ZERO's are %d and ONE's are %d and\n",max_one_zero());

    return 0;
}

int max_one_zero(int a){

    int i,j,one = 0,zero = 0,ck;
    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            if(mat[i][j] == 1)
                one++;
            else
                zero++;
        }
    }

    return zero;
    return one;
}
