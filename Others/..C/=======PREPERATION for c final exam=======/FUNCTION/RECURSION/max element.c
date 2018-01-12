#include <stdio.h>
#define MAX 100
int ara[MAX];
int maximum(int i){ /// i == array size

    int max,j = i;
    if(j == 1 )
        return ;
    else if(ara[j] > ara[j-1])
        max = ara[j];
    maximum (i-1);
    return max;

}
int main()
{
    int i,size;
    scanf("%d",&size);

    for(i = 0;i < size;i++)
        scanf("%d",&ara[i]);

    printf("%d",maximum(size-1));

    return 0;
}

