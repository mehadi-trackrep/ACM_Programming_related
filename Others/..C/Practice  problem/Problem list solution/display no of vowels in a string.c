#include <stdio.h>
#include <string.h>
int main()
{
    char str[100],str1[50];
    int len,i,j,k = 0;
    gets(str);
    len = strlen(str);

    for(i = 0 ; i < len ; i++){

       /* if(str[i] != 'a' && str[i] != 'A' && str[i] != 'e' && str[i] != 'E' && str[i] != 'i' && str[i] != 'o' &&
           str[i] != 'O' && str[i] != 'u' && str[i] != 'U')
           str1[k++] = str[i]*/
        if(str[i] != 65 && str[i] != 69 && str[i] != 73 && str[i] != 79 && str[i] != 85 &&
                str[i] != 97 && str[i] != 101 && str[i] != 105 && str[i] != 111 && str[i] != 117)
           str1[k++] = str[i];
    }

    str1[k] = '\0';
    puts(str1);

    return 0;
}

