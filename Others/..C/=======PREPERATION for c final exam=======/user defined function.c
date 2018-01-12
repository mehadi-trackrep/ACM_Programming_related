#include <stdio.h>
#define UPP(ch) printf("%c",ch - 32)
int main()
{
    char ch;

    scanf("%c",&ch);
    UPP(ch);

    return 0;
}
