#include <stdio.h>
#include <string.h>
int main()
{

    char str1[20],str2[10];

    gets(str1);
    gets(str2);

    printf("%s\n%s",strrev(str1),strrev(str2));

    return 0;
}


