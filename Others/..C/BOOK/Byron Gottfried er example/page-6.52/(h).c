#include <stdio.h>
 main()
{
   int i,j, x = 0;

   for(i = 0; i < 5; ++i)

        for(j = 0; j < i; ++j){ /// ei loop i = 1,2,3,4 er jonno kaj korbe ///
            x += (i + j - 1);
            printf("%d ",x);
            break;
        }

    printf("\nx = %d",x);

    return 0;
}




