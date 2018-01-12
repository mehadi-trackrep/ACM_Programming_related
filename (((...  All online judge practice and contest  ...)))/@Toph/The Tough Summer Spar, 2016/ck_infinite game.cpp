#include<bits/stdc++.h>
using namespace std;
#define pi acos(-1)


double arc_area(double r,double a,double x)
{
    double A,area1,area2,ans;

    area2 = 0.5*a*x;
    A = acos(1.0-((a*a)/(2.0*r*r)));
    area1 = (A*r*r)/2.0;
    ans = area1-area2;

    return ans;
}

int main()
{
    double r,x1,x2,y,a,b,area_t,area_o,area_s,area_arc1,area_arc2,temp;
    int i,t;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%lf%lf%lf%lf",&r,&x1,&x2,&y);
        if(x1>x2){
            temp=x1;
            x1=x2;
            x2=temp;
        }

        if(x1>=r){
            area_t = 0.0;
            area_o = pi*r*r;
            area_s = (x2-x1)*y;

            printf("%.3lf %.3lf %.3lf %.3lf\n",area_o,area_s,area_s,area_t);
        }
        else if(x2>=r){
            b = (r*r)-(x1*x1);
            b = 2.0*sqrt(b);

            area_t = arc_area(r,b,x1);
            area_o = (pi*r*r)-area_t;
            area_s = (((x2-x1)*y*2.0)-area_t)/2.0;

            //cerr << "area_t: " << area_t << endl;

            printf("%.3lf %.3lf %.3lf %.3lf\n",area_o,area_s,area_s,area_t);
        }
        else{
            a = (r*r)-(x2*x2);
            a = 2.0*sqrt(a);

            b = (r*r)-(x1*x1);
            b = 2.0*sqrt(b);

            area_arc1 = arc_area(r,b,x1);
            area_arc2 = arc_area(r,a,x2);

            area_t = area_arc1-area_arc2;
            area_o = (pi*r*r)-area_t;
            area_s = (((x2-x1)*y*2.0)-area_t)/2.0;

            printf("%.3lf %.3lf %.3lf %.3lf\n",area_o,area_s,area_s,area_t);
        }
    }
    return 0;
}
