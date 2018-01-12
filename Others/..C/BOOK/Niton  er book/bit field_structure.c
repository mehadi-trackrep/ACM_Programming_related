#include <stdio.h>
#include <conio.h>

int main()
{
    struct dmy{

        unsigned month : 4;
        unsigned day : 5;
        unsigned year : 7;

    }date[1];

    clrscr();

    date.day = 14;
    date.month = 04;
    date.year = 96

   // scanf("%d%d%d",&date.day,&date.month,&date.year);

    printf("\nSomebody's birth day is %d-%d-%d",date.day,date.month,date.year);

    return 0;
}
