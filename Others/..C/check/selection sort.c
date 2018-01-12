#include <stdio.h>
int main()
{
    int i,j,n,count = 0;
    int ara[50];

    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
        scanf("%d",&ara[i]);

    for(i = 0 ; i < n ; i++){
        for(j = 0 ;j < n ;j++){
            if(ara[j] . ara[j+1]){
                ara[j] = ara[j+1];
                count++;
            }
            else if()
        }
    }

    return 0;
}
