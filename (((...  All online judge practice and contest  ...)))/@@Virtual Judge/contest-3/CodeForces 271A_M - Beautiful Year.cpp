#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    scanf("%d",&year);  /// AC
    int k,y,e,a,r;
    while(1){
        year += 1;
        k = year;

        r = k%10;
        k /= 10;

        a = k%10;
        k /= 10;

        e = k%10;
        k /= 10;

        y = k;

        if(y != e && y != a && e != a && y != r && e != r && a != r){
            printf("%d\n",year);
            break;
        }
    }

    return 0;
}
