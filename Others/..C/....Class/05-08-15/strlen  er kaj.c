#include <stdio.h>
int main()
{
    char ara[50];
    gets(ara);
    int i,len = 0;
    for(i=0;;i++){
        if(ara[i] =='\0')
            break;
        len++;
    }

    printf("%d",len);
   /// printf("The length of %s is %d",ara,len);

    return 0;
}
