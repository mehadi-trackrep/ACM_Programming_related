#include <stdio.h>



int main()
{
    int c[10] = {7,22,33,44,51,63,77,80,91,100};
    int a,b = 0;

    for(a = 0 ; a < 10 ; a++)
        if(c[a] & 1) /// c[a] & 1 or, c[a] & 1 == 1
            b += c[a];
        printf("%d ",b);
                        /// & is bitwise and operator ///
                        /// c[a]&1 == 1 means that , c[a] is a even number . and
                        /// c[a]&1 == 0 means that , c[a] is a odd number .

    return 0;
}

