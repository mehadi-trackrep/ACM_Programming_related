#include <stdio.h>
int main()
{

    int ara[100][100];
    int n,i,j,r,c,c1,x,r1,up,max = 0;   /// AC

    scanf("%d",&n);

    x = 1;
    r = 0;
    c1 = 0;
    c = 0;

    for(i = 0; i <= n-1; i++)
    {

        r = 0;
        c1 = c;

        for(j = 0; j <= i; j++)
        {
            //printf("%d ",x);
            ara[r][c1] = x++;
            r++;
            c1--;

        }
        c++;
    }

    r = 1;
    c = n - 1;

    for(i = n-2; i >= 0; i--)
    {
        c1 = c;
        r1 = r;
        for(j = 0; j <= i; j++)
        {
            //printf("%d ",x);
            ara[r1][c1] = x++;
            r1++;
            c1--;

        }
        r++;
    }

    max = n*n;

    if(max >= 0 && max < 10)
    {
        for(i = 0; i < n; i++)
        {
            for(j = n-1; j >= 0; j--)
            {
                printf("%d ",ara[i][j]);
            }
            printf("\n");
        }

    }
    else if(max >= 10 && max < 100)
    {
        for(i = 0; i < n; i++)
        {
            for(j = n-1; j >= 0; j--)
            {
                printf("%d",ara[i][j]);
                if(ara[i][j] < 10)
                    printf("   ");
                if(ara[i][j] > 10 && ara[i][j] < 100)
                    printf("  ");
                if(ara[i][j] == 100)
                    printf(" ");
            }
            printf("\n");
        }

    }
    else if(max >= 100 && max < 1000)
    {
        for(i = 0; i < n; i++)
        {
            for(j = n-1; j >= 0; j--)
            {
                printf("%d",ara[i][j]);
                if(ara[i][j] < 10)
                    printf("    ");
                if(ara[i][j] >= 10 && ara[i][j] < 100)
                    printf("   ");
                if(ara[i][j] >= 100 && ara[i][j] < 1000)
                    printf("  ");
                if(ara[i][j] >= 1000)
                    printf(" ");
            }
            printf("\n");
        }
    }
    else if(max >= 1000 && max <= 10000){
        for(i = 0; i < n; i++)
        {
            for(j = n-1; j >= 0; j--)
            {
                printf("%d ",ara[i][j]);
                if(ara[i][j] < 10)
                    printf("     ");
                if(ara[i][j] >= 10 && ara[i][j] < 100)
                    printf("    ");
                if(ara[i][j] >= 100 && ara[i][j] < 1000)
                    printf("   ");
                if(ara[i][j] >= 1000 && ara[i][j] < 10000)
                    printf("  ");
                if(ara[i][j])
                    printf(" ");
            }

            printf("\n");

        }
    }

    return 0;
}
