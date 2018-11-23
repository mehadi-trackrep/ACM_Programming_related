#include <bits/stdc++.h>
using namespace std;

int tc;
double a,r1,r2,r3;

double distance(double x1, double y1, double x2, double y2){
    double dis;
    dis = sqrt( (x2-x1)*(x2-x1) + (y2-y1)*(y2-y1) );
    return dis;
}

double area(double Ax, double Ay, double Bx, double By, double Cx, double Cy){
    double area;
    area = fabs( (Ax*(By-Cy) + Bx*(Cy-Ay) + Cx*(Ay-By))/2.0 );
    return area;
}



int main(){
    scanf("%d",&tc);
    while(tc--){
        scanf("%lf%lf%lf%lf",&a,&r1,&r2,&r3);

    }
    //cerr << "---> " << area(15,15,17,36,54,12) << endl;
}
