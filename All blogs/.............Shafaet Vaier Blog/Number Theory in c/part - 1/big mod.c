#include <stdio.h>
#define i64 long long
i64 M;
i64 F(i64 N,i64 P)
{
    if(P == 0) return 1;

    if(P%2 == 0){
        long long ret = F(N,P/2);
        return (ret*ret) % M;  /// again check bug
    }

    else
        return ( ( N % M ) * F(N,P-1) ) % M;

}
int main(){

    long long n,p;

    scanf("%lld%lld%lld",&n,&p,&M);

    printf("%lld", F(n,p) );

    return 0;
}
