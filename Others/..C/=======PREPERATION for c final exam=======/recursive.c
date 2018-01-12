#include <stdio.h>
main()
{
    int x = calculation(2,3);
    printf("%d",x);

    return 0;
}

int calculation(int x,int y){

    if(x < 0 || y > 5)
        return 0;
    calculation(x-1,y+1);
    printf("%d %d",x,y);
    return x;

}
