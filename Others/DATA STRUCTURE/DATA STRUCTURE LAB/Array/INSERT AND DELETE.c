        /// input:
/*
12
4 6 2 1 3 6 7 8 10 3 1 1
5
2 3 1 1 4
5
1 2 3 4 5
*/
#include <stdio.h>
int main()
{
    int n,num[100],i,j;

    scanf("%d",&n);

    for(i = 1;i <= n;i++)
        scanf("%d",&num[i]);

    printf("............................\n");

    for(i = 1;i <= n;i++){
        /// insert:
        if(num[i] % 2 == 0){
            for(j = n;j >= i;j--)
                num[j+1] = num[j];
            n++;
            i++;

            for(j = 1;j <= n;j++)
                printf("%d ",num[j]);
            printf(" %d\n\n",n);
        }
        ///delete:
        else{
            for(j = i;j < n;j++)
                num[j] = num[j+1];
            n--;
            i--;

            for(j = 1;j <= n;j++)
                printf("%d ",num[j]);
            printf(" %d\n\n",n);
        }
    }



    return 0;
}
