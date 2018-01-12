#include <stdio.h>
int main()
{
    int n,i,c = 1;
    char a[100];
    while(scanf("%d",&n)==1)
    {
        getchar();
        gets(a);
        printf("Case %d:Hello %s.\n",c++,a);
    }

    return 0;
}
