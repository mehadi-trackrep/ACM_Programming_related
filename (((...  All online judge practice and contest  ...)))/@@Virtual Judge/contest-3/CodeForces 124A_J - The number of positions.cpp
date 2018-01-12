#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    int k;
    scanf("%d%d%d",&n,&a,&b);   ///AC

    k = n-a;

    if(k <= b)
        printf("%d\n",k);
    else
        printf("%d\n",b+1);
    return 0;
}
