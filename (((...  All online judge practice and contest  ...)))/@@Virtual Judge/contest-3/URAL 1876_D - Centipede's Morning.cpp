#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);    ///AC
    if(a == b || b > a)
        printf("%d\n",2*b+40);
    else
        printf("%d\n",2*a+39);
    return 0;
}
