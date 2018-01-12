#include <stdio.h>
int main()
{
    int i,x,c = 1,ch = 0,u = 1;

        while(scanf("%d",&x)==1){
            if(x==1){
                printf("Case %d: No\n",c++);
                continue;
            }
            else if(x==2){
                printf("case %d: Yes\n",c++);
                continue;
            }
            else if(x%2==0){
                printf("case %d: No\n",c++);
                continue;
            }
            for(i=3;i<x;i+=2){
                if(x%i==0){
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
