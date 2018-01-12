#include <bits/stdc++.h>
using namespace std;

int main()
{
    for(int i=1; i<500; i++)
    {
        if (i ==20) break;
        if (i %2 ==0) continue;
        if (i %5 ==0) break;
        printf("%d\n",i*i);
    }
    return 0;
}
