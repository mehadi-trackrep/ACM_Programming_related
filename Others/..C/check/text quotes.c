#include <stdio.h>
#include <string.h>
int main()
{
    int i,len,count = 0;
    char str[1000];

    while(gets(str)){
        len = strlen(str);
        for(i = 0 ; i < len ; i++){
            if(str[i] == '"'){
                str[i] = '``';
               /* count++;
                if(count%2 == 0)
                    str[i] = '''';  /// problem ace
                else
                    str[i] = '``'; */
            }
        }

        puts(str);
        printf("\n");
    }

    return 0;
}

