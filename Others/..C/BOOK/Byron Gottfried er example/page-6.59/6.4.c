#include <stdio.h>
#include <string.h>
int main()
{
    char ch = 'A';
    while(ch <= 'F'){
        switch(ch){

            case'A':
            case'B':
            case'C':
            case'D':
                ch++;
                continue;
            case'E':
            case'F':
                ch++;
        }
        putchar(ch);
    }

    return 0;
}

