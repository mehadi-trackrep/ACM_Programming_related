#include <stdio.h>
int main()
{
    int dividend,divider,quotient,reminder;

    scanf("%d%d",&dividend,&divider);

    quotient = dividend/divider;

    reminder = dividend - quotient * divider;

    printf("The reminder is: %d",reminder);

    return 0;
}
