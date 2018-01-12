#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a[10];

    while(scanf("%d%d%d%d",&a[0],&a[1],&a[2],&a[3]) == 4)   ///AC
    {
        sort(a,a+4);    /// increasing order a sort

        if((a[2]+a[1]) > a[3] || (a[1]+a[0]) > a[2]) printf("TRIANGLE\n");
        else if(a[0]+a[1] == a[2] || a[1]+a[2] == a[3]) printf("SEGMENT\n");
        else printf("IMPOSSIBLE\n");
    }

    return 0;
}
