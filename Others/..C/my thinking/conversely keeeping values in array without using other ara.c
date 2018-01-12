#include <stdio.h>
int main()
{
    int a[10]={1,2,3,4,5,6,7,8,9,10};
    int i,tem;
    for(i=9;i>=10/2;i--){
        tem = a[i];
        a[i] = a[10-i-1];
        a[10-i-1] = tem;
    }
    for(i=0;i<10;i++)
        printf("%d ",a[i]);
    return 0;
}
