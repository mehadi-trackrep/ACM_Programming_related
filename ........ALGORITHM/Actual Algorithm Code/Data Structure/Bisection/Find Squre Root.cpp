#include <bits/stdc++.h>
using namespace std;

#define d       double

d find_sqrt(d x)
{
    d low,high;
    d mid;

    low = 0.0;
    high = x;

    int loop_time = 100;        /// ey value er opor time limit depend kore ...

    while(loop_time--)
    {
        mid = (low+high)/2;
        if(mid*mid > x) high = mid;
        else low = mid;
    }

    return mid;
}

int main()
{
    d n;
    cin >> n;

    d ans = find_sqrt(n);

    cout << "Square root of a number " << n  << " is: " ;// << ans << endl;
    printf("%.15lf\n",ans);

    return 0;
}
