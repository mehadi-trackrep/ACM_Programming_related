/// input:
/*
1.  1010111
    110
2.  101
    101
3.  10
    no output
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char str[10000];
    int len,i,j,t,count;
    while(gets(str)){
        len = strlen(str);
        count = -1; /// ekhettere must -1 , because the below 'for' loop
        j = len-1;
        t = 0;
        for(i = 0; i <= len/2+t; i++,j--)
        {
            if(str[i] == str[j]){
                printf("%c",str[i]);
                count++;
            }
            if(count == len/2)
                t = len/2;
        }
        printf("\n");
    }

    return 0;
}
