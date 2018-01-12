#include <stdio.h>
#include <string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char name[n][13];
    int ara[n];

    for(i = 0;i < n;i++){
        scanf("%s",name[i]);
        //gets(name[i]);
       // getchar();
    }

    for(i = 0;i < n;i++){
        puts(name[i]);
    }

    return 0;
}


