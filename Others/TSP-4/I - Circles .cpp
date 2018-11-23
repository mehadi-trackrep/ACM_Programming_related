#include <stdio.h>
#include <math.h>

int main()
{
    int tc;
    float a,b,d;
    scanf("%d", &tc);
    float ans;

    while(tc--){
        scanf("%f %f %f", &a, &b, &d);
        ans = (d/sqrt(2))*(d/sqrt(2));
        printf("%.7lf\n", ans);
    }
}







//#include <bits/stdc++.h>
//using namespace std;
//
//int main()
//{
//    int tc;
//    long long a,b,d;
//    cin >> tc;
//    long double ans;
//
//    while(tc--){
//        scanf("%lld%lld%lld", &a,&b,&d);
//        ans = ((long double)d*(long double)d)/(long double)2;
//        printf("%llf\n",ans);
//    }
//
//    return 0;
//}
//
