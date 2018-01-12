#include <stdio.h>
#include <string.h>
int main()
{
    char text[100],letter[]={"`1234567890-=QWERTYUIOP[]\ASDFGHJKL;'ZXCVBNM,./"};

    int i,len1,len2,j;

    len2 = strlen(letter);

    while(gets(text))
    {
        len1 = strlen(text);

        for(i = 0;i < len1;i++)
        {
            if(text[i] == ' '){
                printf(" ");
                continue;
            }
            for(j = 0;j < len2;j++)
            {
                if(text[i] == letter[j]){
                    printf("%c",letter[j-1]);
                    break;
                }
            }
        }

        printf("\n");
    }

    return 0;
}
