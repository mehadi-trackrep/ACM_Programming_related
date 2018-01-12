#include <stdio.h>
int main()
{

    char ara[100];
    int i,sum = 0;
    gets(ara);
    for(i = 0;ara[i] != '\0';i++)
        sum += ara[i] - 48;

    printf("Summation = %d",sum);

    return 0;
}

