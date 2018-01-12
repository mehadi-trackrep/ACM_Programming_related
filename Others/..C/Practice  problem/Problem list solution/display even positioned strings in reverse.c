#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    getchar();
    char str[n][20];

    for(i = 0;i < n;i++)
        gets(str[i]);
    printf("\n");

    for(i = n-1;i >= 0;i--){
        if(i%2 == 0){
            puts(str[i]);
            printf("\n");
        }
    }

    return 0;
}

