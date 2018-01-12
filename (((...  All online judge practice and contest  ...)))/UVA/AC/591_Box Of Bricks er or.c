        /// input
/*

6
5 2 4 1 7 5
0

*/
#include <stdio.h>
int main()
{
    int n,h,i,stack[50],total_bricks,ave_hight;
    int moves,c = 1;

    while(scanf("%d",&n) && n != 0){
        total_bricks = 0;
        for(i = 0;i < n;i++){
            scanf("%d",&stack[i]);
            total_bricks += stack[i];
        }
        ave_hight = total_bricks/n;
        moves = 0;
        for(i = 0;i < n;i++){
            if(stack[i] > ave_hight)
                moves += stack[i] - ave_hight;
        }

        printf("Set #%d\n",c++);
        printf("The minimum number of moves is %d.\n\n",moves);
    }

    return 0;
}
