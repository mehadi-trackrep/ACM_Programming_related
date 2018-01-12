    /// INPUT:
/*
INPUT :  ABCDE  ,te EDCBA insert korte hobe
OUTPUT : AEBDCCDBEA /// that's a palindrome
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[11];
    int i,j,len,k;
    gets(str1);
    len = strlen(str1);
    /// 1 BY 1 INDEX SHOARAICI...orthat odd index gula empty rekhe even index a value transfer korci
    for(i = len-1;i >= 1;i--){
        str1[i+i] = str1[i];
        str1[i+i-1] = '*'; /// EMPTY bujhar jonno * diyeci!!!
    }
    str1[2*len-1] = '*';
    str1[2*len] = '\0';
    /// Adjust korci... empty gula puron korci!
    for(i = 0;i <= len;i+=2){
        str1[10-i-1] = str1[i];
        str1[i+1] = str1[10-i-2];
    }
    puts(str1);

    return 0;
}

