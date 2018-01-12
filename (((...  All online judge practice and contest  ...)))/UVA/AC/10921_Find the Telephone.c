#include <stdio.h>
#include <string.h>
int main()
{
    char exp[35];
    int len,i;

    while(gets(exp))
    {
        len = strlen(exp);

        for(i = 0;i < len;i++)
        {
            if(exp[i] >= 65 && exp[i] <= 90){

                if(exp[i] == 'A' || exp[i] == 'B' || exp[i] == 'C'){
                    printf("2");
                    continue;
                }

                else if(exp[i] == 'D' || exp[i] == 'E' || exp[i] == 'F'){
                    printf("3");
                    continue;
                }

                else if(exp[i] == 'G' || exp[i] == 'H' || exp[i] == 'I'){
                    printf("4");
                    continue;
                }

                else if(exp[i] == 'J' || exp[i] == 'K' || exp[i] == 'L'){
                    printf("5");
                    continue;
                }

                else if(exp[i] == 'M' || exp[i] == 'N' || exp[i] == 'O'){
                    printf("6");
                    continue;
                }

                else if(exp[i] == 'P' || exp[i] == 'Q' || exp[i] == 'R' || exp[i] == 'S'){
                    printf("7");
                    continue;
                }

                else if(exp[i] == 'T' || exp[i] == 'U' || exp[i] == 'V'){
                    printf("8");
                    continue;
                }

                else if(exp[i] == 'W' || exp[i] == 'X' || exp[i] == 'Y' || exp[i] == 'Z')
                    printf("9");
            }

            else
                printf("%c",exp[i]);
        }

        printf("\n");
    }

    return 0;
}
