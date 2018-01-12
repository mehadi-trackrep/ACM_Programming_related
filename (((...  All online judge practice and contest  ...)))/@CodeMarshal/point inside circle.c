#include <stdio.h>
#include <math.h>
int main()
{
    int T,cx,cy,r,px,py,AB,i,c = 1;
    scanf("%d",&T);
    for(i = 0;i < T;i++){
        scanf("%d%d%d%d%d",&cx,&cy,&r,&px,&py);
        AB = sqrt((cx-px)*(cx-px) + (cy-py)*(cy-py));
        //AB = sqrt(((cx-px)*(cx-px)) + ((cy-py)*(cy-py)));
        if(AB < r)
            printf("Case %d: Yes\n",c++);
        else
            printf("Case %d: No\n",c++);
    }

    return 0;
}

