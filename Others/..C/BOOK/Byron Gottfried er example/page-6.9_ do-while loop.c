#include <stdio.h>
#include <string.h>
int main()
{
    int x;

    do{
        scanf("%d",&x);
        if(x>0){
            printf("%d is a positive number\n",x);
            continue;
        } ;
    } while(x<100);

    end: printf("Good Bye");

    return 0;
}

