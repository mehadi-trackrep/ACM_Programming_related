#include <stdio.h>
#include <ctype.h>
#define EOF '\n'
int main()
{
    char letter[80];
    int tag,count = 0;

    while((letter[count] = getchar()) != EOF){   /// lowercase to uppercase ///
        count++;
        tag = count;
    }

    count = 0;

    while(count < tag){
        putchar(toupper(letter[count]));
        ++count;
    }

    return 0;
}

