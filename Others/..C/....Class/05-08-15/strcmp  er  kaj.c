#include <stdio.h>
#include <string.h>
int main()
{
    char ara1[50],ara2[50];

    gets(ara1);
    gets(ara2);

    int i,j;
    int len1,len2;
  /*  for(i=0;;i++){
            if('ara1[i]' > 'ara2[i]')
               /// printf("%d",'ara1[i]' - 'ara2[i]');
                return 1;
            else if('ara1[i]' < 'ara2[i]')
                return -1;
        } */

    if(len1)                                        ///  not complete , problem ace ///

    for(i=0;;i++){
            if(ara1[i] > ara2[i])
                printf("%d",'ara1[i]' - 'ara2[i]');
                //return 1;
            else if(ara1[i] < ara2[i])
                printf("%d",'ara2[i]' - 'ara1[i]');
                //return -1;
        }

    return 0;
}
