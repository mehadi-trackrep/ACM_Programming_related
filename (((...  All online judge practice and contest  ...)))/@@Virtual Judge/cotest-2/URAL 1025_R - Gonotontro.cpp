#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int group,ara[110],i,sum = 0,half;

    scanf("%d",&group);

    for(i = 0;i<group;i++)
        scanf("%d",&ara[i]);

    half = group/2;

    sort(ara,ara+group);
    sum = 0;
    int group_count = 0;
    for(i = 0;i<group;i++){
        sum += ara[i]/2+1;
        group_count++;
        if(group_count > half)
            break;
    }

    printf("%d\n",sum);

    return 0;
}

