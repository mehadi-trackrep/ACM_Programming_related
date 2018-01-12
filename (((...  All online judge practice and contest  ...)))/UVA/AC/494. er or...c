#include <stdio.h>
#include <string.h>
int main()
{
    char str[100000];
    int len,i,ck,word;
    while(gets(str)){
        len = strlen(str);
        ck = 0;
        word = 0;
        for(i = 0;i <= len;i++){
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z')){
                ck = 1;
                continue;
            }
            if(ck == 1)
                word++;
            ck = 0;
        }
        printf("%d\n",word);
    }
    return 0;
}
