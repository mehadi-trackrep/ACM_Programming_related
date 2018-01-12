#include <stdio.h>
int main()
{
    int n,ara[50],i,j,k,temp;

    scanf("%d",&n);
                            /// descending order er jonno insertion sort best!!!
    for(i = 0;i < n;i++){
        scanf("%d",&ara[i]);
    }

    for(i = 1;i <= n-1;i++){

        k = i;

        for(j = i-1;j >= 0;j--){

            if(ara[j] < ara[k]){ /// k is right positon and j is left side position of k...
                                /// ekhane < dile descending order a sort hoy , jate time aro kom lage
                temp = ara[j];
                ara[j] = ara[k];
                ara[k] = temp;

                k--;
            }
        }
    }

    for(i = 0;i < n;i++){
        printf("%d ",ara[i]);
    }

    return 0;
}
