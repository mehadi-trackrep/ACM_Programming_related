#include <stdio.h>
int main()
{
    int low = 0,mid,high = 9;
    int ara[10] = {1,2,3,4,5,6,7,8,9,10};
    int x;
    scanf("%d",&x);

    while(low <= high){

        mid = (low + high)/2;

      /*  if(ara[x] == ara[low]){
            printf("%d",mid-1);
            break;
        }
        else if(ara[x] == ara[high]){
            printf("%d",mid-1);
            break;
        }*/
        if(ara[x] == ara[mid]){
            printf("%d",mid+1);
            break;
        }
        else if(ara[x] > ara[mid])
            low = mid +1;

        else
            high = mid-1;

    }


    return 0;
}
