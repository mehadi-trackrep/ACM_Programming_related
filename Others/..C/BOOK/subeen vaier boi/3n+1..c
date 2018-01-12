#include <stdio.h>
int main()
{
    int a,b,max,min,count = 1,i,u = 0;
    scanf("%d%d",&a,&b);
    if(a>b){
        max = a;
        min = b;
    }
    else {
        max = b;
        min = a;
    }
    for(i=max;i>=min;i--){
        for(;i>1;){
            if(i&1==1)
                i=3*i+1;
            else  i=i/2;
            count++;
        }
        if(count>u)
            u = count;
        else ;
    }

    printf("%d %d %d",a,b,u);

    return 0;

}
