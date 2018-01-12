        /// input
/*
I love you.
You love me.
We're a happy family.
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[500000];
    int i,j,k,len,min_index,max_index;

    while(gets(str)){
        len = strlen(str);
        for(i = 0;i < len;i++){
            if(i == 0 && str[i]!=' '){
                min_index = i;
                while(str[i+1]!=' ' && str[i+1]!='\0')
                    i++;
                max_index = i;
                for(j = max_index;j >= min_index;j--)
                    printf("%c",str[j]);
                continue;
            }
            if(str[i] == ' ' && str[i+1]!=' '){
                printf(" ");
                min_index = i+1;
                i++;
                while(str[i+1]!=' ' && str[i+1]!='\0')
                    i++;
                max_index = i;
                for(j = max_index;j >= min_index;j--)
                    printf("%c",str[j]);
            }
            else
                printf("%c",str[i]);
        }
        printf("\n");
    }

    return 0;
}

