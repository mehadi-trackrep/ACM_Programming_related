#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int sum,x,m,total=0;
    while(cin >> n)
    {
        if(n == 0)
            break;
        sum = n;
        total = 0;
        while(sum > 2)
        {
            x = sum/3;
            m = sum%3;
            total += x;
            sum = x+m;
        }
        if(sum == 2)
            total++;
        printf("%d\n",total);
    }
    return 0;
}
