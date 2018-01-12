#include <stdio.h>
int main()
{
    int n,sum = 0,i;
    int x;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&x);
        sum = sum+x;
    }
    printf("%d",sum);

    return 0;
}
