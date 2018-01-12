#include <stdio.h>
int main()
{
    int i,j,val = 0;
    int a[5][5];
    for(i = 0;i < 5;i++)
        for(j = 0;j < 5;j++){
            a[j][i] = val;
            ++val;
        }
    printf("%d %d",a[4][3],a[1][2]);

    return 0;
}
