#include <stdio.h>
#include <string.h>
char str[100005];
int main()
{
    scanf("%s",str);

    int len = strlen(str);

    int i,ck1 = 0,ck2 = 0;

    for(i = 0;i < len;i++){
        if(str[i] == 'A' && str[i+1] == 'B'){
            str[i] = '*';
            str[i+1] = '*';
            ck1 = 1;
            break;
        }
    }
    for(i = 0;i < len;i++){
        if(str[i] == 'B' && str[i+1] == 'A'){
            ck2 = 1;
            break;
        }
    }

    if(ck1 == 1 && ck2 == 1){
        printf("YES\n");
        return 0;
    }

    ck1 = 0,ck2 = 0;

    for(i = 0;i < len;i++){
        if(str[i] == 'B' && str[i+1] == 'A'){
            str[i] = '*';
            str[i+1] = '*';
            ck1 = 1;
            break;
        }
    }
    for(i = 0;i < len;i++){
        if(str[i] == 'A' && str[i+1] == 'B'){
            ck2 = 1;
            break;
        }
    }
    if(ck1 == 1 && ck2 == 1)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
