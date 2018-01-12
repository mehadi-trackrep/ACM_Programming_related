#include <cstdio>
#include <algorithm>
using namespace std;
int main()
{
    int n,sum = 0,x,i;
    scanf("%d",&n);
    int ara[n+5];
    for(i = 1;i <= n;i++)
        scanf("%d",&ara[i]);
    int total = 1;
    while(total < n){
        sort(ara,ara+total);
        x = total;
        //printf("total->%d ",total);
        while(x >= 1){
            if(ara[x] <= ara[total+1])
                break;
            x--;
        }
        //printf("==>%d ",ara[total+1]);
        //printf("==>%d\n",x);
        sum += x;
        total++;
    }
    printf("%d\n",sum);
    return 0;
}

/*
2
5
38 111 102 111 177
8
276 284 103 439 452 276 452 398
*/
