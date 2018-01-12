#include <stdio.h>
int main()
{
    int n,i,d[100],a,b,sum = 0;
    scanf("%d",&n);
    for(i = 1;i <= n-1;i++)
        scanf("%d",&d[i]);
    scanf("%d%d",&a,&b);
    if(a > b)
        printf("0\n");
    else
        {for(i = 1;i < b;i++)
            sum += d[i];
        printf("%d\n",sum);
        }
    return 0;
}
