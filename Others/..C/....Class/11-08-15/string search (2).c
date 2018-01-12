#include <stdio.h>
#include <string.h>

int main()
{
    int i,len,j,k,len1;
    char str[1000],ch[20];

    gets(str);
    gets(ch);

    len = strlen(str);
    len1 = strlen(ch);

    for(i = 0 ; i < len ; i++){

        k = i;

        for(j = 0 ; j < len1 ; j++){
            if(str[k++] == ch[j])
                continue;
            else
                break;
        }

        if(j == len1)
            printf("Yes");
    }

   // printf("%d",j);

    return 0;
}
