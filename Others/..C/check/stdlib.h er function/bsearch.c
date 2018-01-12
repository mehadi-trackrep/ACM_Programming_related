#include <stdio.h>
#include <string.h>
int main()
{
    //int ara[] = {12,1,4,3,9,5,8,7};
    char *source_string;
    char *new_string;

    scanf("%s",source_string);
    scanf("%s",new_string);

    *strcat(source_string,new_string);

    printf("%s",*source_string);

    return 0;
}
/// pdf copy ///

/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    /// loop over a string using subscript
    char *s = "String in C";
    char *ps = s;
    while(*ps != '\0')
    {
        printf("%c",*ps);
        ps++;
    }
}*/

