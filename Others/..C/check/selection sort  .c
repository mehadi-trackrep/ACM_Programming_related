#include <stdio.h>
int main()
{
    int n,ara[50],i,j,imin_index,temp;
    scanf("%d",&n);

    for(i = 0 ; i < n ; i++){
        scanf("%d",&ara[i]);
    }

    for(i = 0 ; i < n; i++) /// we need to do n-2 passes , অর্থ  n-2 বার  নতুন নতুন  array গঠন হবে ।
    {
        imin_index = i;    /// ith position : i to n-1 index element are candidate for swap
        for(j = i+1 ; j < n ; j++){
            if(ara[j] < ara[imin_index])
                imin_index = j; /// update the index of minimum element
        }
        temp = ara[i];
        ara[i] = ara[imin_index];
        ara[imin_index] = temp;
    }

    for(i = 0 ; i < n ; i++){
        printf("%d ",ara[i]);
    }

    return 0;
}
