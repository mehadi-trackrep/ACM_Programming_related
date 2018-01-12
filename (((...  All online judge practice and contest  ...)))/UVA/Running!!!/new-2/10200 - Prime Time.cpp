#include <bits/stdc++.h>
using namespace std;
int ara[10005];
int main()
{
    //memset(ara,0,sizeof(ara));
    //ara[0] = 1;
    ara[1] = 1;
    int ck;
    for(int i = 2;i <= 10000;i++){  /// WA
        int x = i*i + i + 41;
        ck = 1;
        if(x % 2 == 0)
            ck = 0;
        else{
            for(int j = 3;j*j <= x;j+=2){
                if(x % j == 0){
                    ck = 0;
                    break;
                }
            }
        }
        if(ck == 1)
            ara[i] = ara[i-1] + 1;
        else
            ara[i] = ara[i-1];
    }

    int a,b;
//    while(scanf("%d%d",&a,&b) == 2)
//    {
//        printf("%d ",ara[a]);
//        printf("%d\n",ara[b]);
//    }

    while(scanf("%d%d",&a,&b) == 2){
        if(a > b)
            printf("0.00\n");
        else{
            int ck1 = b - a + 1;
            int ck2;
            if(a == 0)
                ck2 = ara[b];
            else
                ck2 = ara[b] - ara[a]+1;
//            if(a == 0)
//                ck2 += 1;

            //printf("\nck1: %d , ck2: %d\n\n",ck1,ck2);
            if(ck2 == 0)
                printf("0.00\n");
            else{
                double x = ((double)ck2/(double)ck1)*100.0;
                printf("%.2lf\n",x);
            }
        }
    }

    return 0;
}
