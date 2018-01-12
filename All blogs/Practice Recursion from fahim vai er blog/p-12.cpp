/*

Write a recursive solution to find the second maximum number from a given set of integers.

Input:
5
5 8 7 9 3
Output:
8


*/

#include <bits/stdc++.h>
using namespace std;

int ara[100];
int M1 = 0,M2 = 0;
int n;

int MAX(int i)
{
    if(i == n) return M2;
    if(ara[i] > M1)
    {
        if(M1 > M2)
            M2 = M1;
        M1 = ara[i];
    }
    else
    {
        if(ara[i] > M2 && ara[i] < M1) M2 = ara[i];
        //cerr << M2 << endl;
    }

    return MAX(i+1);
}

int main()
{
    while(cin >> n)
    {
        for(int i=0; i<n; i++) scanf("%d",&ara[i]);
        M2 = ara[0];
        int m2 = MAX(0);
        printf("%d\n",m2);
    }

    return 0;
}








