        ///input:
/*
1
1 2 3 2 1
3
4 1 1 2 1
*/
#include <stdio.h>
int main()
{
    int T,ans[5],i,count;
    while(scanf("%d",&T) == 1){
        count = 0;
        for(i = 0;i < 5;i++){
            scanf("%d",&ans[i]);
            if(ans[i] == T)
                count++;
        }
        printf("%d\n",count);
    }
    return 0;
}
