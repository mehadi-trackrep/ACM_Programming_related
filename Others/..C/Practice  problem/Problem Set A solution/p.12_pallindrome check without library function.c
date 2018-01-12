#include <stdio.h>
#include <string.h>
int main()
{
    int i,n,len,c = 1,j,ch = 0,u = 1;
    scanf("%d",&n);
    char ara[n][100];
    getchar();
    for(i=0;i<n;i++){
        gets(ara[i]);
        len = strlen(ara[i]);  ///  printf("%d\n",len);
        for(j=0;j<len/2;j++){
            if(ara[i][j]!=ara[i][len-j-1]){
                printf("Case %d: No\n",c++);
                ch = ++u;
                break;
            }
        }
         if(ch!=u)
                printf("Case %d: Yes\n",c++);
            ch = 0;
    }



    return 0;
}
