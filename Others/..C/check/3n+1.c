#include <stdio.h>
int main()
{
    int a,b,count = 0,i,j,max_count = 1;
    while(scanf("%d%d",&a,&b)==2){
        if(a>b){
            a = a^b;
            b = a^b;
            a = a^b;
        }
        else ;

        for(i=a;i<=b;i++){
            for(j=i;j>1;){
                if(j%2==0)
                    j = j/2;
                else j = 3*j + 1;
                count++;             ///  printf("%d\n",count);
            }

            if(count>max_count)
                max_count = count;
            count = 1;
        }

        printf("%d %d %d\n",a,b,max_count);
    }

    return 0;
}
