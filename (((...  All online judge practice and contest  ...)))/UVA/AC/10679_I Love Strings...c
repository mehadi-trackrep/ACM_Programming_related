#include <stdio.h>
#include <string.h>

int main()
{
    int t,i,len,j,k,len1,n,p,ck;
    char str[100000],ch[1000];

    scanf("%d",&t);
    getchar();

    while(t--){

        gets(str);
        len = strlen(str);   /// AC

        scanf("%d",&n);
        getchar();

        for(p = 0;p < n;p++){

            gets(ch);

            if(strcmp(str,ch) == 0){
                printf("y\n");
                continue;
            }

            len1 = strlen(ch);
            ck = 0;

            for(i = 0 ; i < len ; i++){
                j = 0;
                if(str[i] == ch[j]){
                    while(str[++i] == ch[++j]){
                        if(j == len1-1){
                            ck = 1;
                            break;
                        }
                    }
                }
                if(ck == 1){
                    printf("y\n");
                    break;
                }
            }

            if(ck == 0)
                printf("n\n");
        }
    }

   // printf("%d",j);

    return 0;
}
