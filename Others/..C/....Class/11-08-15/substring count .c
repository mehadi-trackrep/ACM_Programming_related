#include <stdio.h>
#include <string.h>
int main()
{
    int i,j = 1,k = 0,len;
    char str[1000],ch[50][20];

    gets(str);
    len = strlen(str); printf("%d\n",len);

    for(i = 0 ; i < len ; i++){

        if( str[i] == ' ' || str[i] == '.' || str[i] == ',' || str[i] == ';' || str[i] == '?' || str[i] == '!'){
            ch[k++][j] = '\0';
            j = 0;
        }

        else
            ch[k][j++] = str[i];// printf("%d %d\n",k,j);
            printf("%s\n",ch[k][j]);
    }



    return 0;
}

