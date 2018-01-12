#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int n,i,j,len,count;

    scanf("%d",&n);
    getchar();

    for(i = 0;i < n;i++){
        gets(str);
        len = strlen(str);
        if(str[0] == ' ')
            count = 0;
        else
            count = 1;

        for(j = 0;j < len;j++){
            if(str[j] == ' ' && str[j+1] != ' ')
                count++;
        }

        printf("%d\n",count);
    }

    return 0;
}
