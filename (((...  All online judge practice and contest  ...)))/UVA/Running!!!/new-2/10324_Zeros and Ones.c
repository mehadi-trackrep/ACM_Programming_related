#include <stdio.h>
#include <string.h>
char str[1000005];
int main()
{
    int i,t,a,b,c = 1,ck;

    while(scanf("%s",str) == 1){

        printf("Case %d:\n",c++);

        scanf("%d",&t);

        while(t--){
            scanf("%d%d",&a,&b);
            if(a > b){
                a = a^b;
                b = a^b;
                a = a^b;
            }
            ck = 0;
            for(i = a;i <= b;i++){
                if(str[a] != str[i]){
                    ck = 1;
                    printf("No\n");
                    break;
                }
            }
            if(ck == 0)
                printf("Yes\n");
        }

        memset(str,'\0',sizeof(str));
    }

    return 0;
}
