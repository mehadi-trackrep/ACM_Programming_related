#include <bits/stdc++.h>
using namespace std;
int main()
{
    double x,y, x2, y2,r;
    double step, dis;
    int int_step;
    while (scanf("%lf%lf%lf%lf%lf",&r,&x,&y,&x2,&y2)==5)    ///AC
    {
        dis=sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
        //cerr<<"d "<<dis<<endl;
        step=dis/(2*r);
        // cerr<<"step d  "<<step <<endl;
        int_step=ceil(step);
        cout<<int_step<<endl;
    }
    return 0;
}
