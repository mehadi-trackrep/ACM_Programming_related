/*

    Write a recursive function to print an array in the following order.
    [0] [n-1]
    [1] [n-2]
    .........
    .........
    [(n-1)/2] [n/2]

    Input:
    5
    1 5 7 8 9
    Output:
    1 9
    5 8
    7 7

*/


#include <bits/stdc++.h>
using namespace std;

void print_rev(int i,int n,int N,int *ara)
{
    if(i == -1 && n == N) return ;
    //else if(i+1 == n || n-1 == i) return ;
    else
    {
        print_rev(i-1,n+1,N,ara);
        printf("%d %d\n",ara[i],ara[n]);
    }
}

int main()
{
    int n;
    int ara[100];
    cin >> n;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }
    print_rev((n-1)/2,n/2,n,ara);
    return 0;
}


/*

5
1 5 7 8 9

4
1 5 7 8


*/
