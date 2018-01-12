#include <stdio.h>
#include <string.h>
int main()
{
    char int_ara[20];

    gets(int_ara);

    int i,len,sum = 0;

    len = strlen(int_ara);

    for(i=len-1;i>=0;i--){
        sum = ( int_ara[i]-48 );   /// bujhte problem ///
    }
    printf("%d",sum);

    return 0;
}

