#include <stdio.h>
#include <string.h>
int main()
{
    char line[200];
    int len,i;

    while(gets(line)){
        len = strlen(line);  /// evabe kora jabe na...
        for(i = 0;i < len;i++){
            if(line[i] == ' ' || line[i] == 'Q' || line[i] == 'A' || line[i] == 'Z' || line[i] == '`')
                printf("%c",line[i]);
            else
                printf("%c",(int)line[i] - 1 );
        }
        printf("\n");
    }

    return 0;
}
