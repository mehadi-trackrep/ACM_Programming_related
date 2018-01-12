#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i;
    int j;
    int n = 9;
    for(int i=1; i*i<=n; i++)
    {
        printf("=>\n");
        for(j = 1; j<=i; j++)
            printf("-->\n");
        printf("\n\n");
    }
}
