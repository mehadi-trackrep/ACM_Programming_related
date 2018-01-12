#include <stdio.h>
#define EOF '\n'
void reverse(void);
main()
{
    printf("Please enter a line of text below\n");
    reverse();
}

void reverse(void){

    char c;

    if((c = getchar()) != EOF);
        reverse();
    putchar(c);
    return ;

}
