#include <stdio.h>
int main()
{
    int t,e,f,c,i,count1,count,d; /// very nice algo. but it's not for this problem.

    scanf("%d",&t);

    while(t--){
        scanf("%d%d%d",&e,&f,&c);
        count1 = 0;
        count = 0;
        while(1){
            count1 += count;
            count = 0;
            if(e < c)
                break;
            while(e >= c){
                d = e - c;
                e = d;
                count++;
            }
            e = d + count;
        }
        printf("%d\n",count1+f);
    }

    return 0;
}
