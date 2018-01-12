#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000000],t[1000000];
    int len1,len2,i,j,k,ch;

    while(scanf("%s%s",s,t) == 2){

        len1 = strlen(s);
        len2 = strlen(t);
        k = -1;
        ch = 0;

        for(i = 0;i < len1;i++){

            ch = 0;

            for(j = 0;j < len2;j++){
                if((s[i] == t[j]) && j > k){
                    ch = 1;
                    k = j;
                    break;
                }
            }

            if(ch != 1){
                printf("No\n");
                break;
            }
        }

        if(ch == 1)
            printf("Yes\n");
    }

    return 0;
}

