#include <stdio.h>
#include <string.h>
int main()
{

    char a[] = "bangladesh";
    int i,len;
    len = strlen(a);
    for(i=0;i<len;i++)
        printf("%c",(a[i]-32));

    return 0;
}
