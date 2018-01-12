#include <bits/stdc++.h>
using namespace std;

int a[10][10],b[10][10],c[10][10],n;
int i,j,k,l,temp1,temp2,p;

void transpose()
{
    printf("\n\ntranspose matrix\n\n");
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++){
            temp1=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp1;
        }
    }
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++) printf("%d ",a[i][j]);
        printf("\n");
    }
   
}

void print_upper_triangle()
{
    printf("\n\nupper trangular matrix\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++) printf("%d ",a[i][j]);
        printf("\n");
        for(k=1;k<=i;k++) printf("  ");
    }
    printf("\n\n");
}

void print_lower_triangle()
{
    printf("\n\nlower trangular matrix\n\n");

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    
     cout << "\n\n";
}

void interchange_two_diagonals()
{
    printf("\n\ndiagonals interchange\n\n");
    
    int x=1,y=n;
    for(i=1; i<=n; i++)
    {
        temp1 = a[x][x];
        a[x][x] = a[x][y];
        a[x][y] = temp1;
        
        x++;
        y--;
    }
    
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    
    cout << "\n\n";
  
}

void ist_2ndrow_interchange()
{
    printf("\n\nist row and 2nd row interchange...\n\n");
    
    for(j=1; j<=n; j++)
    {
        temp1=a[1][j];
        a[1][j]=a[2][j];
        a[2][j]=temp1;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    
    cout << "\n\n";

}

void odd_row_to_next_row_interchange()
{
    printf("\n\nodd row er sathe , tar immidiate porer row er interchange...\n\n");
    for(i=1; i<n; i+=2)
        for(j=1; j<=n; j++)
        {
            temp1=a[i][j];
            a[i][j]=a[i+1][j];
            a[i+1][j]=temp1;
        }
    
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    cout << "\n\n";
}

void middle_row_column_interchange()
{
    int colm = n/2+1,row = n/2+1;
    for(i=1;i<=n;i++)
    {
        temp1 = a[i][colm];
        a[i][colm] = a[row][i];
        a[row][i] = temp1;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    cout << "\n\n";
}

void multiplication()
{
    int k;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++) scanf("%d",&b[i][j]);
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            int sum = 0;
            for(k=1;k<=n;k++)
            {
                sum += a[i][k]*b[k][j]; 
            }
            c[i][j] = sum;
            printf("%d ",sum);
        }
        printf("\n");
    }
    
}

int main()
{

    scanf("%d",&n);

    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++) scanf("%d",&a[i][j]);
    
    //transpose();

    //print_upper_triangle();

    //print_lower_triangle();

    //interchange_two_diagonals()

    //ist_2ndrow_interchange();

    //odd_row_to_next_row_interchange();
    
    //middle_row_column_interchange();
    
    multiplication();
    
    return 0;
}

/*
4
1 2 3 4
4 5 6 5
7 8 9 6
9 1 2 3

3
1 2 3
4 5 6
7 8 9

1 2 3
4 5 6
7 8 9

5
1 2 3 4 5
6 7 8 3 2
3 4 5 6 7
2 2 2 2 2
1 1 1 1 1

*/
