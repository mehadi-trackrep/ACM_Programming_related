#include <bits/stdc++.h>
using namespace std;
#define i64 long long
int main()
{
    int t;
    i64 A,M;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&A,&M);
        if((M+1)%A == 0)
            printf("yes\n");
        else if(M%A == 0)
            printf("no\n");
        else if(A >= M)
            printf("no\n");
        else if(M+1 == A*(M+1-A))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}


