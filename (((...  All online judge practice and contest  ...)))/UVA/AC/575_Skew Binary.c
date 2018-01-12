
                /// 575 ///

#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
   char num[50];
   int len,i,p,sum;
   //unsigned long long int sum = 0;
   while(gets(num)){ //puts(num);

       if(strcmp(num,"0") == 0)
           break;

       len = strlen(num);

       sum = 0;
       p = len;

       for(i = 0;i < len;i++){
            sum = sum + (num[i] - 48) * (int)( pow (2.0,(double)p) - 1 );
            p--;
       }

       printf("%d\n",sum);
   }

    return 0;
}

