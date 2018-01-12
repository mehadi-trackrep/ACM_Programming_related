#include <stdio.h>
int main()
{
    int a,b,i,sum = 0,max,min;

    scanf("%d%d",&a,&b);

    if(a>b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    for(i=max;i>=min;i--)
        sum = sum + i;

    printf("%d",sum);

    return 0;
}
