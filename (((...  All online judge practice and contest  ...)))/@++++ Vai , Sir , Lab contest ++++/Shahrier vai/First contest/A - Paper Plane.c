#include <stdio.h>
int main()
{
    unsigned long long a,b,count;
    while(scanf("%llu%llu",&a,&b) == 2){  /// AC
        count = 0;
        while(1){
            if(a % b == 0){
                count += a/b;
                break;
            }
            count += a/b;
            a %= b;
            if(b > a){
                a = a^b;
                b = a^b;
                a = a^b;
            }
        }
        printf("%llu\n",count);
    }
    return 0;
}
