#include <stdio.h>
#define DATA1 1+3
#define DATA2 2*DATA1
/*#define DATA1 4+3
#define DATA2 2/DATA1   ==> 2/4 == 0 so, 0+3 = 3
*/
int main()
{

    printf("%d %d",DATA1,DATA2);
    int i,arr[5];
    for(i = 0;i < 5;i++)
        arr[i] = DATA2*i;
    for(i = 0;i < 5;i++)
        printf("arr[%d] = %d\n",i,arr[i]);

    for(i = 1;i < 5;i++){
        ++arr[i];
        arr[i] += arr[i-1];
    }
    for(i = 0;i < 5;i++)
        printf("arr[%d] = %d\n",i,arr[i]);

    return 0;
}



