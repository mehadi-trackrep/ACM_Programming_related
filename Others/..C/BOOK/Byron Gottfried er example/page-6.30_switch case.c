#include <stdio.h>
#include <string.h>
int main()
{
    char ch;

    switch(ch = getchar()){  /// or , ch = toupper(getchar()) ///

    case 'r':
    case 'R':
        printf("Red");
        break;
    case 'g':
    case 'G':
        printf("Green");
        break;
    case 'b':
    case 'B':
        printf("Blue");
        break;
    default :
        printf("EROR");
        break;
    }

    return 0;
}

