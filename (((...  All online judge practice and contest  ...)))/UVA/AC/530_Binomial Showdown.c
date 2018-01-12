#include <stdio.h>

long min(long x,long y){
    if(x<y)
        return x;
    return y;
}

long C(int n, int r) {
    long ans = 1;
    r = min(r, n - r);  /// formula: C(n,k) = C(n,n-k).
    int i;
    for (i = 1; i < r+1; i++) {
        ans*= (n - r + i);
        ans/=i;
    }

    return ans;
}

int main(){
    long n,r;
   while(1){
       scanf("%ld %ld",&n,&r);
       if(n==0 && r==0)
            break;
        printf("%ld\n",C(n,r));

    }
    return 0;
}
