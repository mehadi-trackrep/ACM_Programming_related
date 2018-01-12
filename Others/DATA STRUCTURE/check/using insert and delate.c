#include <stdio.h>
/// process: even hole immediate porer index a insert,
///         r odd hole delete

/// input:
/*
5
4 6 1 3 2

output:
4 4 6 6 2 2
*/
int main()
{
    int ara[100];
    int n,i,j;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
        scanf("%d",&ara[i]);
    printf("\n..............\n");
    for(i = 0;i < n;i++){
        if(ara[i] % 2 == 0){
            for(j = n;j > i;j--)
                ara[j] = ara[j-1];
            ara[i+1] = ara[i];
            n++;
            i++;
        }
        else{
            for(j = i;j < n-1;j++)
                ara[j] = ara[j+1];
            n--;
            i--;
        }
    }
    printf("total : %d\n",n);
    for(i = 0;i < n;i++)
        printf("%d ",ara[i]);

    return 0;
}
