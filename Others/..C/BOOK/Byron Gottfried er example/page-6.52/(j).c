#include <stdio.h>
 main()
{
   int i,j,k, x = 0;

   for(i = 0; i < 5; ++i)

        for(j = 0; j < i; ++j){ /// ei loop i = 1,2,3,4 er jonno kaj korbe ///

            k += (i + j - 1);

            if(k % 2 == 0)
                x += k;
            else if(k % 3 == 0) /// or, else if(k % 3 == 0)
                                  ///    x += k - 2;
                    x += k - 2;

            printf("%d ",x);
        }

    printf("\nx = %d",x);

    return 0;
}





