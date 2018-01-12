#include <stdio.h>
#include <string.h>
int main()
{
    char num[15];
    int t,i,n,len,x1,x2,d,sum,ck;
    scanf("%d",&t);
    getchar();
    while(t--){
        scanf("%s",num);
        len = strlen(num);
        n = 0;
        for(i = 0;i < len;i++)
            n = n * 10 + ((int)num[i]-48);
        if(len > 1)
            d = 9*(len);
        if(len == 1)
            d = 9;
        ck = 0;
        for(i = d;i >= 1;i--){
            x1 = n - i;
            x2 = x1;
            sum = 0;
            while(x2 >= 1){
                sum += x2 % 10;
                x2 /= 10;
            }
            if(x1 + sum == n){
                ck = 1;
                break;
            }
        }
        if(ck == 1)
            printf("%d\n",x1);
            //printf("....%d\n",x1);
        else
            printf("0\n");
            //printf("....0\n");
    }

    return 0;
}
