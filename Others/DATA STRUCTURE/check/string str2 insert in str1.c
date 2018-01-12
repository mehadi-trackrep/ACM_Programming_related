#include <stdio.h>
#include <string.h>
///INPUT:
/*
ABCDE
EDCBA

output:
AEBDCCDBEA

ABCDEFGHIJ
JIHGFEDCBA

output:
AJBICHDGEFFEGDHCIBJA
*/
int main()
{
    char str1[100],str2[100];   /// length same
    int len,i,j;
    scanf("%s%s",str1,str2);
    len = strlen(str1);
    int x = len,k = 0,l = 0;

    for(i = 0;i < len;i++){
        for(j = x;j > l;j--)    /// for insert
            str1[j] = str1[j-1];
        str1[l+1] = str2[k++];
        x++;
        l += 2;
    }
    str1[x] = '\0';
    printf("\n%s and length: %d\n",str1,x);
    return 0;
}
