#include <bits/stdc++.h>
using namespace std;

void print(int i, int j, int *a)
{
    if(i<=j)
    {
        printf("%d %d\n", a[i], a[j]);
        print(i+1, j-1, a);
    }
}

int main()
{
    int i, n, a[100];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    print(0, n-1, a);
    return 0;
}

/*

5
1 5 7 8 9

4
1 5 7 8

*/
