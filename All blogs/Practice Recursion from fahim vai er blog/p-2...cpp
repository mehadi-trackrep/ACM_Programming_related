/*

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

int n;
int ara[100];

void rf(int i,int j)
{
    if(i == (n-1)/2 && j == n/2)
    {
        printf("%d %d\n",ara[i],ara[j]);
        return ;
    }
    printf("%d %d\n",ara[i],ara[j]);
    rf(i+1,j-1);
}

int main()
{
    cin >> n;
    for(int i=0; i<n; i++) scanf("%d",&ara[i]);
    rf(0,n-1);
    return 0;
}
