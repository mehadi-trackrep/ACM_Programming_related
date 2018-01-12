#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,j,Len,len,count,c = 1;
    char str[100],name[20];

    scanf("%d",&n);
    getchar();

    gets(str);

    while( scanf("%s",name) == 1 ){

        len = strlen(name);
        count = 0;

        for(i = 0,j = 0; i < Len ; i++){
            if(name[j] == str[i]){
                j++;
                count++;
                continue;
            }

            else if(count == len){
                printf("case %d : Yes\n",c++);
                break;
            }

            else
            {
                j = 0;
                count = 0;
            }
        }

        if(count != len){
            printf("case %d : No\n",c++);
        }
    }

    return 0;
}
