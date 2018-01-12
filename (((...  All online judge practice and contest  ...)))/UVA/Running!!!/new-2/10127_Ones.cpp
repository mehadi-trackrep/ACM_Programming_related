#include <bits/stdc++.h>
using namespace std;
#define i64 long long   ///use big mod recursion algorithm
i64 m;
i64 mod(i64 b,i64 p)    ///AC
{
    if(p == 0)
        return 1;
    if(p%2 == 0){
        i64 a = mod(b,p/2);
        return ((a%m)*(a%m))%m;
    }
    else
        return ((b%m)*(mod(b,p-1))%m)%m;
}

int main()
{
    int r; /// r means reminder
    while(scanf("%lld",&m) == 1)
    {
        r = 0;
        for(i64 i=0;;i++){
            r += mod(10,i);
            if(r%m == 0){
                printf("%lld\n",i+1);
                break;
            }
        }
    }

    return 0;
}
