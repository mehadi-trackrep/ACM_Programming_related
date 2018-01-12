#include <stdio.h>
int main()
{
    int n,i,j,ch,u = 1,count = 2;

    while(scanf("%d",&n)==1){
        for(i=5;;i+=2){
            for(j=3;j<i;j+=2){
                if(i%j==0){
                    ch = ++u;
                    break;
                }
            }
            if(ch!=u)
                count++;
            ch = 0;
            if(count==n){
                printf("%d\n",i);
                break;
            }
        }
    }

    return 0;
}

