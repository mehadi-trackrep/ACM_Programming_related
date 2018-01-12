#include <stdio.h>
int main()
{
    int B_age[10000],S_age[10000]; /// b == bachelor , s == spinster
    int b,s,i,j,c = 1,min;

    while(scanf("%d%d",&b,&s) && b != 0 && s != 0){
        min = 60;
        for(i = 1;i <= b;i++){
            scanf("%d",&B_age[i]);
            if(B_age[i] < min)
                min = B_age[i];
        }
        for(i = 1;i <= s;i++)
            scanf("%d",&S_age[i]);
        if(b <= s){
            printf("Case %d: 0\n",c++);
            continue;
        }
        if(b > s){
            printf("Case %d: %d %d\n",c++,b-s,min);
        }
    }

    return 0;
}
