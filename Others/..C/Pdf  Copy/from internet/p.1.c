#include <stdio.h>
int main()
{
    int a = 5,b = 1;
    {
        int b = 10;
        ++b;
        ++a;
        {
            int a = 20;
            ++a;
            a = ++b;
            printf("%d %d ",a,b);
        }
        ++a;
        ++b;
        printf("%d %d ",a,b);
    }

    printf("%d %d ",a,b);

    return 0;
}
