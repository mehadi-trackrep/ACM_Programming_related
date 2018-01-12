#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=1;
    double N,M,K,P;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf",&N,&M,&K,&P);  ///AC
        //scanf("%d%d%d%lf",&N,&M,&K,&P);
        printf("Case %d: %.6lf\n",c++,P*N*K);
    }
}
