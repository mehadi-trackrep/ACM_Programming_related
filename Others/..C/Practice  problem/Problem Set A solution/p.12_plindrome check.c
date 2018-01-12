#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,len;
    scanf("%d",&n);
    getchar();
    char a[100],b[100];
    for(i=1;i<=n;i++){
        gets(a);
        len = strlen(a);
        for(j=0;j<len;j++)
            b[j] = a[len-j-1];
        b[len]='\0'; ///printf("%s",b);

        if(strcmp(a,b) == 0)
            printf("Case %d: Yes\n",i);
        else printf("Case %d: No\n",i);

    }

    return 0;

}
