#include <stdio.h>
 main()
{
   int i = 0, x = 0,count = 0;

   while(i < 20){
        if(i%5 == 0){
            x += i;
            printf("%d ",x);
        }
        ++i;
        count++;
    }

    printf("\nx = %d",x);
    printf("\ncount = %d",count);

   // printf("\nx = %d",0%2);
   // printf("\nx = %d",0%2367);

    return 0;
}
