#include <stdio.h>
#include <math.h>
int main()
{
    int n,c = 1;
    double u,v,a,t,s;

    while(scanf("%d",&n)){

        if(n == 0)
            break;

        else if(n == 1){
            scanf("%lf%lf%lf",&u,&v,&t);
            a = (v - u)/t;
            s = u*t + 0.5*a*t*t;
            printf("Case %d: %.3lf %.3lf\n",c++,s,a); /// check corner case
            continue;
        }

        else if(n == 2){
            scanf("%lf%lf%lf",&u,&v,&a);
            t = (v - u)/a;
            s = (v*v - u*u)/(2*a);   /// must two parenthesis
            printf("Case %d: %.3lf %.3lf\n",c++,s,t);
            continue;
        }

        else if(n == 3){
            scanf("%lf%lf%lf",&u,&a,&s);
            v = sqrt(u*u + 2*a*s);
            t = (v - u)/a;
            printf("Case %d: %.3lf %.3lf\n",c++,v,t);
            continue;
        }

        else if(n == 4){
            scanf("%lf%lf%lf",&v,&a,&s);
            u = sqrt(v*v - 2*a*s);
            t = (v - u)/a;
            printf("Case %d: %.3lf %.3lf\n",c++,u,t);
            continue;
        }
    }

    return 0;
}

