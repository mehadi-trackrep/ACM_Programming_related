#include<stdio.h>
int main()
{
    int x1,y1,x2,y2,dx,dy;

    while(scanf("%d %d %d %d",&x1,&y1,&x2,&y2)==4)
    {
        if(x1==0 && x2==0 && y1==0 && y2==0)
            break;

        if(x1 > x2)
            dx = x1-x2;
        else
            dx = x2-x1;
        if(y1 > y2)
            dy = y1-y2;
        else
            dy = y2-y1;
        if(dx == 0 && dy == 0)
            printf("0\n");
        else if(dx == dy || dx == 0 || dy == 0) ///i).same cell a , ii). same row a ,iii). same column a thakle
            printf("1\n");
        else
            printf("2\n");

    }
}
