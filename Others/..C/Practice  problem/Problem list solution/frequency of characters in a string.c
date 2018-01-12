#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int len,i,j,count;
    gets(str);
    len = strlen(str);
    for(i = 0 ; i < len ; i++){
        count = 0;
        for(j = i+1 ; j < len ; j++){
            if((str[i] == str[j]) || (str[i]+32 == str[j]) || (str[i]-32 == str[j])){
                str[j] = ' ';
                count++;
            }
        }

        if(count == 0)
            printf("%c - %d\n",str[i],1);
        else
            printf("%c - %d\n",str[i],count);
    }

    return 0;
}
