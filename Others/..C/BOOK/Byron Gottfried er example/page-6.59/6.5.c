#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    for(i = 1;i < 20;i++){
        switch(i){

            case 0:i += 5;
                    continue;
            case 1:i += 2;
                    //break;
            case -1:i += 5;
            default:i += 4;
                     break;

        }

        printf("%d,",i);
    }

    return 0;
}

