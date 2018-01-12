#include <stdio.h>
int main()
{
    int i,j,k,n,count  = 0;
    int ara[1050];

    while(scanf("%d",&n) == 1){

        for(i = 0 ; i < n ; i++)
            scanf("%d",&ara[i]);

        count = 0;

        for(i = 0 ; i < n ; i++){

            for(j = i+1 ; j < n ;j++){

                if(ara[i] > ara[j]){

                    count++;
                }

            }

        }

        printf("Minimum exchange operations : %d\n",count);
    }

    return 0;
}

