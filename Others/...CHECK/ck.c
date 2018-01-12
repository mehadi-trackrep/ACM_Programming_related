#include <stdio.h>
#include <string.h>
int main()
{
    char ch,ara[50];    ///V.V.I
    int i,j=0,t;
    scanf("%d\n",&t); ///%d er por new line means , er por joto new line ashbe sob skip korbe...
    for(i=0;;i++)
    {
        scanf("%c",&ch);
        if(ch == '\n')
            break;
        getchar();
        ara[j++] = ch;
    }
    ara[j] = '\0';
    puts(ara);
    return 0;
}
