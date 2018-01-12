#include <stdio.h>
#include <string.h>
char word[100][1000];
int main()
{
    int n,max_length,len,i;

    while(scanf("%d",&n) == 1){

        for(i = 0;i < n;i++)
            scanf("%[^\n]",word[i]);

        for(i = 0;i < n;i++){
            len = strlen(word[i]);
            for(j = 0;j < len-1;j++){
                if(word[i][j] == word[i][j+1]){
                    ck = 1;
                    ch = word[i][j];
                    continue;
                }
                else if(word[i][j] != word[i][j+1] && ck = 1 && word[i][j+1] == ch){

                }
                else{
                    ck = 0;
                    break;
                }
            }
        }
    }

    return 0;
}

