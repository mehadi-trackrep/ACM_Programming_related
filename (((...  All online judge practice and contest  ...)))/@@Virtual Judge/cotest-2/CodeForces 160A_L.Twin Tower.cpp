#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
    int n,ara[110],i,sum = 0,half;

    scanf("%d",&n);

    for(i = 0;i<n;i++){
        scanf("%d",&ara[i]);
        sum += ara[i];
    }

    half = sum/2;

    sort(ara,ara+n);
    sum = 0;
    int count = 0;
    for(i = n-1;i>=0;i--){
        sum += ara[i];
        count++;
        if(sum > half)
            break;
    }

    printf("%d\n",count);

    return 0;
}
