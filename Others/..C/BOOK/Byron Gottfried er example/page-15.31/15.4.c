#include <stdio.h>
#define PRINT(int) printf("int = %d " ,int)
int main()
{
    int x,y,z;
    x = 03;y = -1;z = 01;
    PRINT(x^x);
    z<<=3;PRINT(z);
    y>>=3;PRINT(y);

}

