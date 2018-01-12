#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int xp = 1;
    scanf("%d",&t);

    while(t--)
    {
        long long n;
        scanf("%lld",&n);
        long long a = sqrt(n);
        long long x,y;

        if(a&1)
        {
            if(n == a*a)
            {
                y = a;
                x = 1;
            }
            else
            {
                y = a+1;
                x = n-a*a;
                if(x > a+1)
                {
                    y -= (x-a)-1;
                    x = a+1;
                }
            }

        }
        else
        {
            if(n == a*a)
            {
                x = a;
                y = 1;
            }
            else
            {
                x = a+1;
                y = n-a*a;
                if(y > a+1)
                {
                    x -= (y-a)-1;
                    y = a+1;
                }
            }
        }

        printf("Case %d: %lld %lld\n",xp++,x,y);
    }
}
