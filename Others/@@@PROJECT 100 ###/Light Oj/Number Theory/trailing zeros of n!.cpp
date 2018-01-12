#include<stdio.h>

#include<math.h>

int TrainlingZero(int num);

int main(void)

{

    int num,count;

    printf("Enter the No : ");

    scanf("%d",&num);

    count = TrainlingZero(num);

    printf("\n\nTrailing Zoroes of %d ! : %d",num,count);

    printf("\n\n\n");

    return 0;

}

int TrainlingZero(int num)

{

    int i,count;

    i = 1;

    count = 0;

    while(num >= (5 * i))

    {

        count += floor(num /(5*i));

        i *= 5;

    }

    return count;

}
