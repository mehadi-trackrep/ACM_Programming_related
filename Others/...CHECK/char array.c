#include <stdio.h>

int main()
{
    int n;
    char ara[10];
    int i;
    scanf("%d ",&n);
    for(i=0; i<n; i++)
    {
        scanf("%c",&ara[i]);
        getchar();
    }
    for(i=0; i<n; i++)
    {
        printf("%c ",ara[i]);
    }
    return 0;
}
