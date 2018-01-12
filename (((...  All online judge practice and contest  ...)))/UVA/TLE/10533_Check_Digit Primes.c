#include <stdio.h>
int main()
{

    int t,a,b,i,count;
    int ret,j,ck,sum,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        count = 0;
        if(a > b){
            a = a^b;
            b = a^b;
            a = a^b;
        }
        for(i = a;i <= b;i++){ /// TLE
            if(i == 1)
                continue;
            if(i == 2){
                count++;
                continue;
            }
            if(i % 2 == 0)
                continue;
            if(i == 5 || i == 7){
                count++;
                continue;
            }

            ck = 0;

            for(j = 3;j*j <= i;j += 2){
                if(i % j == 0){
                    ck = 1;
                    break;
                }
            }

            n = i;

            if(ck == 0){
                sum = 0;
                while(n >= 1){
                    sum += n % 10;
                    n /= 10;
                }
                if(sum == 2){
                    count++;
                    continue;
                }
                if(sum % 2 == 0)
                    continue;

                for(j = 3;j*j <= sum;j += 2){
                    if(sum % j == 0){
                        ck = 1;
                        break;
                    }
                }

                if(ck == 0)
                    count++;
            }
        }

        printf("%d\n",count);
    }

    return 0;
}
