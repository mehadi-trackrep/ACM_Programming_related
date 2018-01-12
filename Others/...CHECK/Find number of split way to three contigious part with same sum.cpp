#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100],n,p = 0,ans = 1,sum=0,val,f1,f2,f3;

    scanf("%d",&n);

    for(int i = 0;i < n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    val = sum/3;
    int ind1=0,ind2=0,ind3=0;

    while (ind1 < n)
    {
        p = p + arr[ind1];
        if (p != val)
            ind1++;
        else if (p == val)
        {
            f1 = 1;
            break;
        }
    }
    ind2 = ind1;
    ind2++;
    p = 0;
    while (ind2 < n)
    {
        p = p + arr[ind2];
        if (p != val)
            ind2++;
        else if (p == val)
        {
            f2 = 1;
            break;
        }
    }
    ind3 = ind2;
    ind3++;
    p = 0;
    while (ind3 < n)
    {
        p = p + arr[ind3];
        if (p != val)
            ind3++;
        else if ( p == val )
        {
            f3 = 1;
            ans++;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}

/*
9
0 0 0 0 0 0 0 0 0

8
0 0 0 0 0 0 0 0
*/
