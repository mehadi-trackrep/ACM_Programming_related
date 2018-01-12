#include <stdio.h>
int ara[65535],cnt = 1,ara1[65535];
int binary_search(int a);
int main()
{

    int i,j,n,t,ck;

    ara[1] = 1;

    memset(ara1,0,sizeof(ara1));       /// evabe korle hobe na...

    ara1[1] = 1;
    for(i = 1;;i++){
        ara[i+1] = ara[i]+i;
        cnt++;
        ara1[ara[i+1]] = 1;
        if(ara[i+1] > 65535)
            break;
    }

    for(i = 1;i <= cnt-1;i++)
        printf("%d ",ara1[i]);
    printf("\n\n=>%d\n",cnt);
    /*scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        ck = binary_search(n);
        if(t > 1)
            printf("%d ",ck);
        else if(t == 1)
            printf("%d",ck);
    }*/

    return 0;
}

int binary_search(int a){

    int low = 0,high = cnt-2,i,mid;

    while(low <= high){
        mid = (low+high)/2;
        if(a < ara[mid])
            high = mid-1;
        else if(a > ara[mid])
            low = mid-1;
        else if(ara[mid] == a)
            return 1;
    }
    return 0;

}
