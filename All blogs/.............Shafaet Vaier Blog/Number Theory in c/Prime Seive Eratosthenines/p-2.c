#include <stdio.h>
#include <math.h>
#include <stdbool.h>
bool status[1100002]; /// bool artho boolean( ekhane value 0 and 1 chara onno kisu hobe na)...v.v.v.i.
//void siv()
int main()
{
    int N = 95,i,j;
    int sq = sqrt(N);

    for(i = 0;i <= N;i++)
        status[i] = 0;

    for(i = 4;i <= N;i += 2)
        status[i] = 1;
    for(i = 3;i <= sq;i += 2)  /// print er khettere halka problem ace
    {
        if(status[i] == 0)
        {
            for(j = i*i;j <= N;j += i)
                status[j] = 1;
        }
    }

    status[1] = 1;

    for(i = 2;i < j;i++)
    {
        if(status[i] == 0)
        {
            printf("%d ",i);
        }
    }
}
