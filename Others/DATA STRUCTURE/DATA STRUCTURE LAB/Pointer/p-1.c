#include <stdio.h>
int main()
{
    int *ptr1,*ptr2;
    int value1,value2;  /// V.V.I.

    ptr1 = &value1;
    ptr2 = &value2;

    printf("ptr1 a j address ace: %p\n",ptr1);
    printf("ptr2 a j address ace: %p\n",ptr2);

    printf("ptr1 er address: %p\n",&ptr1);
    printf("ptr2 er address:%p\n",&ptr2);

    printf("\n\n"); ///.............

    ptr1 = &value2;
    ptr2 = &value1;

    printf("ptr1 a j address ace: %p\n",ptr1);
    printf("ptr2 a j address ace: %p\n",ptr2);

    printf("ptr1 er address: %p\n",&ptr1);
    printf("ptr2 er address:%p\n",&ptr2);

    return 0;
}
