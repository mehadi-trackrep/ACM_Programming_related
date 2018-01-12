    /// INPUT:
/*
INPUT:  ABCDE
OUTPUT: AABBCCDDEE
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    int i,j,len;
    gets(str1);
    len = strlen(str1);
    for(i = len-1;i >= 0;i--){
        str1[i+i] = str1[i];
        str1[i+i+1] = str1[i];
    }
    str1[len*2] = '\0';
    puts(str1);

    return 0;
}

