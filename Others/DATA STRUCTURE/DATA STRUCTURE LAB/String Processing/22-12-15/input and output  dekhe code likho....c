#include <stdio.h>
#include <string.h>
///input:
/*
ABCDE
output:
AEBDCCDBEA  ///that's a palindrome
*/
int main()
{
    char str[100];
    scanf("%s",str);
    int i,j,len;
    len = strlen(str);
    for(i = len-1;i >= 1;i--){
        str[i+i] = str[i];
    }
    for(i = len*2-2,j = 1;i >= 0;i-=2,j+=2){
        str[j] = str[i];
    }
    str[len*2] = '\0';
    puts(str);
    return 0;
}
