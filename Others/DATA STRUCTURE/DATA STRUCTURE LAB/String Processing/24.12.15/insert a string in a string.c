/// input:
/*
input:str1: ABC123
      str2: XYZ
output:     ABCXYZ123
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[10000],str2[10000],temp;
    int len1,len2,i,j,total_len;
    gets(str1);
    gets(str2);
    len1 = strlen(str1);
    len2 = strlen(str2);
    total_len = len1+len2;
    for(i = 1; i <= len1/2; i++)
        str1[total_len-i] = str1[len1-i];

    j = len1/2;

    for(i = 0; i < len2; i++)
        str1[j+i] = str2[i];

    str1[total_len] = '\0';
    puts(str1);

    return 0;
}
