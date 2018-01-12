#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m,k;
    double ans,s;
    int t,cs=1;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%lld",&n);

        ans=sqrt(n);
        s=ans-(int)ans;
        if(s>=0.5) m=(int)ans+1;

        else m=(int)ans;

        k=(m*m)-n;


        printf("Case %d: %lld %lld\n",cs++,m,k);
    }
    return 0;
}


