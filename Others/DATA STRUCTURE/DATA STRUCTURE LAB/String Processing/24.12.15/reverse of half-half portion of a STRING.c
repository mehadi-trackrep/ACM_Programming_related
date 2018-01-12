#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000],temp;
    int len,i,j;
    while(gets(str)){
        len = strlen(str);   /// ekhettere len must even hobe
        j = len/2 - 1;
        for(i = 0;i < len/4;i++){ /// NEW HALF PORTION ER ABAR HALF length
                                  /// kore loop chalate hobe
            temp = str[i];
            str[i] = str[j-i];
            str[j-i] = temp;

            temp = str[len-i-1];
            str[len-i-1] = str[j+i+1];
            str[j+i+1] = temp;

        }

        puts(str);
    }

    return 0;
}
