#include <stdio.h>

int add (int a)
{
    printf("%d\n",a);
    
    if(a == 0 || a == -1)
        return 0;
    return a + add(a-2) + add(a-1);
}

int main()
{
    printf("%d",add(4));
    
    return 0;
}