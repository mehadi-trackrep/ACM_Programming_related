#include <stdio.h>
int main()
{
    long long int a,b;

    a = 4294967296;

    printf("%lld\n",a);

    scanf("%lld",&b);

    printf("%lld\n",b);

    printf("Size %d and %d\n",sizeof(a),sizeof(b));

    return 0;
}
