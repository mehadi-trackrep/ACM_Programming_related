#include <stdio.h>
int main()
{
    int n,i,max_number = 0;
    while(scanf("%d",&n)==1){
        int ara[n];
        for(i=0;i<n;i++){
            scanf("%d",&ara[i]);
        }
        for(i=0;i<n;i++){
            if(ara[i+1]<ara[i])
                max_number = ara[i+1];
            else ;
        }
        printf("%d\n",max_number);
    }

    return 0;
}
