#include <stdio.h>

void test_b(int n)
{
    if(n > 0)
        test_b(n-2);
    printf("%d\n",n);
}

int main()
{
    test_b(4);
    printf("###\n");
    test_b(5);
    
    return 0;
}