/*

Suppose you are given an array of integers in an arbitrary order. Write a recursive solution to find the maximum element from the array.

Input:
5
7 4 9 6 2
Output:
9


*/

#include <bits/stdc++.h>
using namespace std;

int ara[100];
int M = 0;
int n;

int MAX(int i)
{
    if(i == n) return M;
    if(ara[i] > M) M = ara[i];
    return MAX(i+1);
}

int main()
{
    while(cin >> n)
    {
        for(int i=0; i<n; i++) scanf("%d",&ara[i]);
        int m = MAX(0);
        printf("%d\n",m);
    }

    return 0;
}







