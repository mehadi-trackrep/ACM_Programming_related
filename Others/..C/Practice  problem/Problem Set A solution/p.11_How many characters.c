#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,length,c = 1;
    scanf("%d",&n);
    char ara[n][1000];
    getchar();
    for(i=0;i<n;i++){
        gets(ara[i]);
        length = strlen(ara[i]);
        printf("Case %d: %d\n",c++,length);
    }

    return 0;
}
