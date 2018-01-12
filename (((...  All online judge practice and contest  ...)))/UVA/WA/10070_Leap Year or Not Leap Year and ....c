#include <stdio.h>
int main()
{
    int year,count = 0;
    while(scanf("%d",&year) == 1){ /// WA
        if(count > 0)
        printf("\n");
        if(year % 4 == 0){ //|| year % 100 == 0 || year % 400 == 0){
            printf("This is leap year.\n");
            if(year % 15 == 0){
                printf("This is huluculu festival year.\n");
                continue;
            }
            if(year % 55 == 0)
                printf("This is bulukulu festival year.\n");
            //printf("\n");
        }
        else if(year % 15 == 0)
            printf("This is huluculu festival year.\n");
        //else if(year % 55 == 0)
            //printf("This is bulukulu festival year.\n");
        else
            printf("This is an ordinary year.\n");

        count++;
    }

    return 0;
}
