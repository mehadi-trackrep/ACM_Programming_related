#include <stdio.h>
#include <string.h>
char str[100005];
int main()
{
    scanf("%s",str);
    int len = strlen(str);
    int i,ck1 = 0,ck2 = 0;
    for(i = 0;i < len;i++){
        if(ck1 != 1){
            if(str[i] == 'A'){
                if((i+1 < len) && str[i+1] == 'B'){
                    ck1 = 1;
                    i++;
                    continue;
                }
            }
        }
        if(ck2 != 1){
            if(str[i] == 'B'){
                if(i+1 < len && str[i+1] == 'A'){
                    ck2 = 1;
                    i++;
                }
            }
        }
    }
    if(ck1 == 1 && ck2 == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}

