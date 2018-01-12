        ///input:
/*
4
donate 1000
report
donate 500
report
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char operation[10];
    int t,i,total = 0,amount;

    scanf("%d",&t);
    getchar();

    while(t--){

        scanf("%s",operation);

        if(strcmp(operation,"donate") == 0){
           scanf("%d",&amount);
           total += amount;
        }
        else
            printf("%d\n",total);
    }

    return 0;
}

