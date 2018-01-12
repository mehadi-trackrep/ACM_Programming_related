#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    int c = 1;

    while(gets(str)){
        if(strcmp(str,"*") == 0)
            break;

        else if(strcmp(str,"Hajj") == 0)
            printf("Case %d: Hajj-e-Akbar\n",c++);

        else
            printf("Case %d: Hajj-e-Asghar\n",c++);
    }

    return 0;
}

