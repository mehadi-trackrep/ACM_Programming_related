#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int len,i,vowel = 0,consonant = 0,digit = 0,space = 0;

    gets(str);
    len = strlen(str);

    for(i = 0 ; i < len ; i++){

        if(str[i] == ' '){
            space++;
            continue;
        }

        else if(str[i] == 'a' || str[i] == 'A' || str[i] == 'e' || str[i] == 'E' || str[i] == 'i' || str[i] == 'o' ||
                str[i] == 'O' || str[i] == 'u' || str[i] == 'U'){
            vowel++;
            continue;
        }

        else if((str[i] > 65 && str[i] != 69 && str[i] != 73 && str[i] != 79 && str[i] != 85 && str[i] <= 90) ||
                (str[i] > 97 && str[i] != 101 && str[i] != 105 && str[i] != 111 && str[i] != 117 && str[i] <= 122) ){
                consonant++;
                continue;
        }

        else if(str[i] == '0' || str[i] == '1' || str[i] == '2' || str[i] == '3' || str[i] == '4' || str[i] == '5' ||
           str[i] == '6' || str[i] == '7' || str[i] == '8' || str[i] == '9')
           digit++;

        else ;
    }

    printf("Vowel - %d\nConsonant - %d\nDigit - %d\nSpace - %d\n",vowel,consonant,digit,space);

    return 0;
}

