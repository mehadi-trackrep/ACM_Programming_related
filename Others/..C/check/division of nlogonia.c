#include<stdio.h>

int main()
{
    long int testcase, x, y, m, n,i;
    while(scanf("%ld",&testcase)==1)
    {
        if(testcase==0)
            break;
        scanf("%ld%ld",&x,&y);
        for(i=1;i<=testcase;i++)
        {
            scanf("%ld%ld",&m,&n);
            if(x == m || y == n)
                printf("divisa\n");
            else if(x < m && y < n)
                printf("NE\n");
            else if(m < x && y < n)
                printf("NO\n");
            else if(m < x && n < y)
                printf("SO\n");
            else if(x < m && n < y)
                printf("SE\n");
        }
    }
    return 0;
}
