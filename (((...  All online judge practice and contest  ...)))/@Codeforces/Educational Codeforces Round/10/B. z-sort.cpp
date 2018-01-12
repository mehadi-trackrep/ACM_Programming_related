#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a[1010];
    cin >> n;
    for(int i=1; i<=n; i++)///AC
    {
        scanf("%d",&a[i]);
    }
    int temp;
    for(int i=2; i<=n; i++)
    {
        if(i%2 == 0)
        {   
            if(a[i] < a[i-1])
            {
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
        else
        {
            if(a[i] > a[i-1])
            {
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
            }
        }
    }
    
    for(int i=1; i<=n; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}