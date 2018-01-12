# include<stdio.h>

int main()
{

    int n;
    int i;
    int j;
    int k=1;


    for(i=1; i<=10; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("%d X %d = %d\t",j,k,j*k);
        }
        k++;
        printf("\n");
    }


    return 0;


}
