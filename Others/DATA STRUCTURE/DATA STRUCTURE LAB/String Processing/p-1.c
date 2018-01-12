    /// INPUT:
/*
ABCDEF
UVWXYZ
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100],str2[100],temp;
    int i,j,len;
    gets(str1);
    gets(str2);
    len = strlen(str1); /// len same
    for(i = 1;i < len;i += 2){
        temp = str1[i];
        str1[i] = str2[i];
        str2[i] = temp;
    }
    puts(str1);
    puts(str2);
    return 0;
}
