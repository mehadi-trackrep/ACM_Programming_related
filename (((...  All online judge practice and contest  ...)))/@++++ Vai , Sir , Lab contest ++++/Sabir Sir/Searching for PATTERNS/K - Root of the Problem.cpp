#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n,p;
    //double k;
    double d;
    while(scanf("%lf%lf",&p,&n) == 2){  ///AC

        if(p == 0 && n == 0) break;

        d = 1/n; // printf("%f\n",d);

        int k = pow(p,d);
        double B,N;

        B = p;
        N = n;

        int d1 = (int)B - (int)pow(k,N);
        int d2 = (int)B - (int)pow(k+1,N);
        int d3 = (int)B - (int)pow(k-1,N);

        if(d2 < 0) d2 *= (-1);
        if(d3 < 0) d3 *= (-1);

//        cerr << "k: " << k << endl;
//        cerr <<"d1: " << d1 << endl;
//        cerr <<"d2: " << d2 << endl;
//        cerr <<"d3: " << d3 << endl;

        if(d1 < d2 && d1 < d3) printf("%d\n",k);
        else if(d2 < d1 && d2 < d3) printf("%d\n",k+1);
        else if(d3 < d2 && d1 > d3) printf("%d\n",k-1);
    }

    return 0;
}

/*

4 3
5 3
27 3
750 5
1000 5
2000 5
3000 5
1000000 5
0 0

*/
