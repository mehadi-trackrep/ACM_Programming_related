#include <stdio.h>
int main()
{
    long int a,b;

    a = -2147483648;
    b = 2147483647;   /// long int er etai maximum range
                    ///  0 theke -2147483648 and
                    ///  1 theke 2147483647 porjonto ///
    ///scanf("%ld",&a); ///    ////// 32 bits //////

    printf("%ld and %ld\n",a,b);
    printf("Size %d and %d",sizeof(a),sizeof(b));

    return 0;
}

