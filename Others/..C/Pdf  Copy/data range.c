#include <stdio.h>
int main()
{
    unsigned short int i = 32767;
    printf("Expected value: 32767\tThe value we get: %d\n", i);
    i += 1;
    printf("Expected value: 32768\tThe value we get: %d\n", i);
    i = -32768;
    printf("Expected value: -32768\tThe value we get: %d\n", i);
    i -= 1;
    printf("Expected value: -32769\tThe value we get: %d\n", i);

    return 0;
}
