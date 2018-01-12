#include <stdio.h>
#include <string.h>
int main()
{

    char str1[20],str2[10];

    gets(str1);
    gets(str2);


    if(strstr(str1,str2))
        printf("Yes");

    return 0;
}

