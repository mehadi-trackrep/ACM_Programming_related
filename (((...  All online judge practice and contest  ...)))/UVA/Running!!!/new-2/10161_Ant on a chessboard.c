#include <stdio.h>
int main()
{
    int i,j,n,ck;
    int ara[5][5];

    for(i = 5;i >= 1;i--){

        for(j = 1;j <=  5;j++)
            scanf("%d",&ara[i][j]);
    }

    while(scanf("%d",&n) == 1){  /// problem ace

        ck = 1;

        for(i=5;i >= 1;i--){

            for(j=1;j<=5;j++){

                if( n == ara[i][j]){
                    printf("%d %d\n",i,j);
                    ck = 0;
                    break;
                }
            }

            if(ck == 0)
                break;
        }

    }

    return 0;
}

