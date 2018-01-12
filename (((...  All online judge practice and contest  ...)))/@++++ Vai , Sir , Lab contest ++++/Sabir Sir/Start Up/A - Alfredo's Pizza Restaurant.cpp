#include <bits/stdc++.h>
using namespace std;
#define pi 3.141592654

int main()
{
    int r,w,l,c=1;
    
    while(1)
    {
        cin >> r;
        if(r == 0)
            break;
        cin >> w >> l;
        if(w*w + l*l <= 4*r*r)
        {
            printf("Pizza %d fits on the table.\n",c++);
        }
        else
            printf("Pizza %d does not fit on the table.\n",c++);
    }
    
    return 0;
}