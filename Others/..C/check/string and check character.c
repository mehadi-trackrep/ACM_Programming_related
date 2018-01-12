#include <stdio.h>
#include <string.h>
int main()
{
    char ch = 'M',str[] = "Mehadi";

    printf("%c\n",ch);

    ch = str[5];

    printf("%c\t",ch);

    if(ch == 105)      /// 105 hocce ASCII value ///
        printf("%c",ch);

    return 0;
}

