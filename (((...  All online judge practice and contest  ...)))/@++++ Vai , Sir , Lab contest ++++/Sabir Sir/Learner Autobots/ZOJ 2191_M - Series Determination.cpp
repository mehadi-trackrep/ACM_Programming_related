#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z;
    int f3,f4,f5;
    int A,B,C;
    while(cin >> x >> y >> z)   ///AC
    {
        C = x;
        B = (4*y-z-3*C)/2;
        A = (-2*y+z+C)/2;

        f3 = A*3*3 + B*3 + C;
        f4 = A*4*4 + B*4 + C;
        f5 = A*5*5 + B*5 + C;

        printf("%d %d %d\n",f3,f4,f5);
    }
    return 0;
}
