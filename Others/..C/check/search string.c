#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,ch = 0,u = 1,c = 1,len;
    scanf("%d",&n);
    getchar();
    char ara[100],a[20];
    gets(ara);
    len = strlen(ara);

    for(i = 0;i < n;i++){
        gets(a);
        for(j = 0;j < len; j++){
            if(a[i] == ara[j]){
                i++;
                ch = ++u;
            }
            if(a[i]!=ara[j+1]){
                printf("Case %d : No\n",c++);
                break;
            }
        }

        if(ch!=u){
            printf("Case %d : Yes\n",c++);
        }
        ch = 0;
    }

    return 0;
}
