/*

Write a recursive program to remove all odd integers from an array.
You must not use any extra array or print anything in the function.
Just read input, call the recursive function, then print the array in main().

Input:
6
1 54 88 6 55 7
Output:
54 88 6

*/

#include <bits/stdc++.h>
using namespace std;

int n;
int ara[100];

void rf(int ind)
{
    if(ind == n) return ;
    if(ara[ind]&1)
    {
        for(int i=ind; i<n-1; i++)
        {
            ara[i] = ara[i+1];
        }
        n--;
        ind--;
    }
    rf(ind+1);

}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) scanf("%d",&ara[i]);
    rf(0);
    for(int i=0; i<n; i++)
    {
        if(i == 0) printf("%d",ara[i]);
        else printf(" %d",ara[i]);
    }
    printf("\n");
    return 0;
}

