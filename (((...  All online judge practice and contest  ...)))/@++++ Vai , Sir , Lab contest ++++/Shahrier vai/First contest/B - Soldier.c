#include <stdio.h>
int main()
{
    int k,n,w,i,total;
    scanf("%d%d%d",&k,&n,&w); /// AC
    total = (k*w*(w+1))/2;
    if(total <= n)
        printf("0\n");
    else
        printf("%d\n",total-n);

    return 0;
}
