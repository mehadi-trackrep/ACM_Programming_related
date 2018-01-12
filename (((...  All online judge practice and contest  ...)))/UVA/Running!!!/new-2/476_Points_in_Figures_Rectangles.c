        /// input:
/*

r 8.5 17.0 25.5 -8.5
r 0.0 0.0 5.5 10.3
r 2.5 2.5 12.5 12.5
*
2.0 2.0
4.7 5.3
6.9 11.2
20.0 20.0
17.6 3.2
-5.2 -7.8
9999.9 9999.9

*/
#include <stdio.h>
int main()
{
    int i,j,k,c = 1,ck;
    char ch;
    double x,y,ara[10][4];
    double lower_bound_x,lower_bound_y,upper_bound_x,upper_bound_y;
    k = 0;
    for(i = 0;;i++){
        ch = getchar();
        if(ch == '*')
            break;
        for(j = 0;j < 4;j++)
            scanf("%lf",&ara[k][j]);
        k++;
    }

    while(scanf("%lf%lf",&x,&y) && x != 9999.9 && y != 9999.9){
        ck = 0;
        for(i = 0;i < k;i++){

            if( (x >= ara[i][0] && x <= ara[i][2] && y >= ara[i][1] && y <= ara[i][3]) || (x <= ara[i][0] && x >= ara[i][2] && y <= ara[i][1] && y >= ara[i][3]) ){
                printf("Point %d is contained in figure %d\n",c++,i+1);
                ck = 1;
                break;
            }
        }

        if(ck == 0)
            printf("Point %d is not contained in any figure\n",c++);
    }

    return 0;
}
