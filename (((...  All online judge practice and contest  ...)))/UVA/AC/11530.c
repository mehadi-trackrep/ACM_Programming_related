#include <stdio.h>
#include <string.h>
int main()
{
    char mes[105];
    int i,t,len,sum,c,j;

    while(scanf("%d",&t) == 1){

        getchar();
        c = 1; /// c => case number

        for(i = 0; i < t; i++){

            //scanf("%[^\n]",mes);
            gets(mes);
            len = strlen(mes);
            sum = 0;

            for(j = 0; j < len; j++){

                if(mes[j] == ' ' || mes[j] == 'a' || mes[j] == 'd' || mes[j] == 'g' || mes[j] == 'j' || mes[j] == 'm' ||
                   mes[j] == 'p' || mes[j] == 't' || mes[j] == 'w'){
                    sum += 1;
                    continue;

                   }

                else if(mes[j] == 'b' || mes[j] == 'e' || mes[j] == 'h' || mes[j] == 'k' || mes[j] == 'n' ||
                        mes[j] == 'q' || mes[j] == 'u' || mes[j] == 'x'){
                    sum += 2;
                    continue;
                   }

                else if(mes[j] == 'c' || mes[j] == 'f' || mes[j] == 'i' || mes[j] == 'l' || mes[j] == 'o' ||
                        mes[j] == 'r' || mes[j] == 'v' || mes[j] == 'y'){
                    sum += 3;
                    continue;
                   }

                 else if(mes[j] == 's' || mes[j] == 'z')
                    sum += 4;
            }

            printf("Case #%d: %d\n",c++,sum);
        }
    }

    return 0;
}

