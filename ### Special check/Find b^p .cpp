#include <bits/stdc++.h>
using namespace std;

int main()
{
    double b,p;

    while(scanf("%lf%lf",&b,&p) == 2)
    {
        double ans = pow(b,p);

        printf("--> %d\n",(int)ans);
    }

    return 0;
}
