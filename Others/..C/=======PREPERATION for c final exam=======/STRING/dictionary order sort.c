#include <stdio.h>
#include <string.h>
int main()
{
    char word[7][20],temp[20];
    int i,j;
    for(i = 0;i < 7;i++)
        gets(word[i]);
    for(i = 0;i < 7;i++){
        for(j = i+1;j < 7;j++){
                if(strcmp(word[i],word[j]) > 0){
                    strcpy(temp,word[i]);
                    strcpy(word[i],word[j]);
                    strcpy(word[j],temp);
                }

        }
    }

    for(i = 0;i < 7;i++)
        puts(word[i]);

    return 0;
}


