#include <stdio.h>
int main()
{
    int c,n,i,j,ara[100];

    while(scanf("%d",&c) == 1){
        for(i = 0;i < c;i++){
            scanf("%d",&n);
            for(j = 0;j < n;j++){
               scanf("%d",&ara[j]);
            }
        }
    }

    return 0;
}

