#include <stdio.h>
#include <string.h>
int main()
{
    char a[5],ch;
    gets(a); puts(a);
    int i,len;
    len = strlen(a); printf("%d",len);
    for(i=0;i<=len/2;i++){
        ch = 'a[i]';
        a[i] = 'a[len-i-1]';
        a[len-i-1] = 'ch';
    }
    puts(a);
    return 0;
}
