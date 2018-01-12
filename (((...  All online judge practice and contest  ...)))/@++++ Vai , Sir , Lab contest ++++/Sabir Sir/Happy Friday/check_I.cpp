#include <cstdio>
#include <cmath>
#include <iostream>
using namespace std;

struct Point
{
    __int64 x,y;
    void Get ()
    {
        scanf("%lld%lld",&x,&y);
    }
}data[10005];

int Gcd (int x,int y)
{
    return !y?x:Gcd(y,x%y);
}

int main ()
{
    int T,n,i;
    __int64 inside,on;
    scanf("%d",&T);
    for (int cas=1;cas<=T;cas++)
    {
        on=0;
        double area=0;
        scanf("%d",&n);
        for (i=0;i<n;i++)
            data[i].Get();
        data[n]=data[0];

        for (i=0;i<n;i++)
        {
            area+=data[i+1].x*data[i].y - data[i].x*data[i+1].y;
            int a = fabs(data[i].x-data[i+1].x);
            int b = fabs(data[i].y-data[i+1].y);
            //cerr << "-->a : " << a << " b: " << b << endl;
            int val = Gcd(a,b);
            on+=val;
            printf("gcd of %d and %d is %d: \n",a,b,val);
        }

        area=fabs(area/2.0);
        cerr << "area: "  << area << endl;
        inside=area+1-on/2.0;

        cerr << " b: "  << on << endl;

        printf("Case %d: %lld\n",cas,inside);
    }
    return 0;
}
