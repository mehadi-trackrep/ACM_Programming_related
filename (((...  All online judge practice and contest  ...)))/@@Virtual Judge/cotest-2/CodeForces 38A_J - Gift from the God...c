#include <stdio.h>
int main()
{
    int n,i,d[100],a,b,sum = 0;
    scanf("%d",&n);
    for(i = 1;i <= n-1;i++)     ///AC
        scanf("%d",&d[i]);
    scanf("%d%d",&a,&b);

    for(i = a;i < b;i++)
        sum += d[i];
    printf("%d\n",sum);

    return 0;
}
