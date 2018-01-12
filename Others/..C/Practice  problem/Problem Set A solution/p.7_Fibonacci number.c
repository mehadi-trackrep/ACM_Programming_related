#include <stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    ///int a[n+1];
    unsigned long long int a[n+1];
    scanf("%llu%llu",&a[0],&a[1]);
    printf("\n%llu\n%llu\n",a[0],a[1]);
    for(i=2;i<n;i++){
        a[i] = a[i-1] + a[i-2];
        printf("%llu\n",a[i]);
    }

    return 0;
}
