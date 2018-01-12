/*
You will be given an array of integers, write a recursive solution to print it in reverse order.

Input:
5
69 87 45 21 47
Output:
47 21 45 87 69

*/

#include <bits/stdc++.h>
using namespace std;

void print_rev(int i, int n, int *a)
{
    if(i < n)
    {
        print_rev(i+1, n, a);
        printf("index: %d, %d\n",i,a[i]);
    }
    else return ;
}

int main()
{
    int a[1000];
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    print_rev(0,n,a);
    return 0;
}

/*

5
69 87 45 21 47

*/
