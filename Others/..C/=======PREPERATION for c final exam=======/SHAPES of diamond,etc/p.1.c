#include <stdio.h>
int main()
{

    int r;    /// r == number of rows
    int i,j,k;
    scanf("%d",&r);

    for(i = 1;i <= r;i++){ /// for line

        for(j = r-i;j >= 1;j--){ /// for space
            printf(" ");
        }

        for(j = i;j >= 1;j--){ /// for number
            if(j == i || j == 1)
                printf("1 ");

            else
                printf("%d ",i);
        }

        printf("\n");
    }

    return 0;
}

