#include <stdio.h>
int main()
{
    int n,i,c = 1;
    char a[7][20];
    while( scanf("%d",&n) == 1 )
    {
        getchar();
        for(i=0;i<n;i++)
       {
            gets(a[i]);
            printf("Case %d:Hello %s.\n",c++,a[i]);
       }
    }

    return 0;
}

