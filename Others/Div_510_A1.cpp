#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int n,m,a;

int main()
{
    int kmin, kmax;

    scanf("%d",&n);
    scanf("%d",&m);

    int cnt = 0,mx=0;

    for (int i=0; i<n; i++){
        scanf("%d",&a);
        cnt += a;
        if(a > mx) mx = a;
    }

    kmin = ceil((float)(cnt+m)/n);
    if(kmin<=mx) kmin = mx;
    kmax = m + mx;

    cout << kmin << " " << kmax << endl;

    return 0;
}
