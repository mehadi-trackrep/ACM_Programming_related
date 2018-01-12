#include <stdio.h>
int main()
{
    int i,j,n,temp,k;
    int ara[50];

    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
        scanf("%d",&ara[i]);
    for(j = 0;j<n;j++){
        for(i = j ; i < n ; i++){
            if(ara[i]>ara[i+1]){
                temp = ara[i+1];
                k = i+1;
            }
        }
    ara[k] = ara[j];
    ara[j] = temp;

    }

    for(i = 0 ; i < n ; i++)
        printf("%d ",&ara[i]);

    return 0;
}
