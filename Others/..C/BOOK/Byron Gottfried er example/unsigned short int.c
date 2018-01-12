#include <stdio.h>

int main(void)
{
    unsigned short int length = 10;

    printf("Enter length : ");
    scanf("%u", &length);

    printf("value is %u \n", length);

    printf("The size of the value is %d \n", sizeof(length)); /// 2 bytes jaiga ney ///

    return 0;
}
