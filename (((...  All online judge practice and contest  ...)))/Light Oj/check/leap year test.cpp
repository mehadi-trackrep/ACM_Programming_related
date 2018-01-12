#include <bits/stdc++.h>
int main()
{
    int year,ck,ck1 = 0,ck2 = 0,ck3 = 0;
    int leap_year = 0;

    while(scanf("%d",&year) == 1)
    {

        ck1 = 0,ck2 = 0,ck3 = 0;
        leap_year = 0;

        if(year % 4 == 0){

                ck1 = 1;

            if(year % 100 == 0){

                    ck2 = 1;

                if(ck2 == 1){

                    if(year % 400 == 0){

                            ck3 = 1;
                    }
                }
            }
        }

        if( (ck1 == 1 && ck2 == 0) || (ck1 == 1 && ck2 == 1 && ck3 == 1) )
             leap_year = 1;
            //printf("Leap Year\n");


    }

    return 0;
}
