#include <stdio.h>
int main()
{
    int i,j,k,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&i,&j,&k);
    if((i+j)>k&&(j+k)>i&&(k+i)>j)printf("OK\n");
    else printf("Wrong!!\n");
    }
   return 0;
}
