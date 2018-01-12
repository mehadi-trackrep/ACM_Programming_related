#include <stdio.h>
int main()
{
    int n,i,j,ch,u = 1,count = 2;
    scanf("%d",&n);
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
            printf("%d",i);
            break;
        }
    }

    return 0;
}
