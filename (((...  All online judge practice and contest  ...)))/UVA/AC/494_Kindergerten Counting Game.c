#include <stdio.h>
#include <string.h>
int main()
{

    char line[1000];
    long i,len,j,count;

    while( gets(line) ){

        len = strlen(line);
        count = 0;

        for(i = 0;i < len;i++){

            if( ( (line[i] >= 'A' && line[i] <= 'Z') || (line[i] >= 'a' && line[i] <= 'z') ) &&
                ( (line[i+1] < 'A' || line[i+1] > 'Z') && (line[i+1] < 'a' || line[i+1] > 'z') ) )
                count++;
        }

        printf("%ld\n",count);

    }

    return 0;
}


