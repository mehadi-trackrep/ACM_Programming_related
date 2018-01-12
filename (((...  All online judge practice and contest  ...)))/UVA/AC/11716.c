#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{

    int t,len,i,j,k;
    double d;
    char text[10005];

    while(scanf("%d",&t) == 1){

        getchar();

        while(t >= 1){ /// check corner case

            //scanf("%[^\n]",text);

            //getchar();

            gets(text);

            len = strlen(text);
            d = sqrt(len);

            if( d - (int)d != 0 ){
                printf("INVALID\n");
                //printf("=> %d\n",len);
            }

            else {

                for(i = 0;i < (int)d;i++){
                    k = i;
                    for(j = k;j < (int)d*d;j += (int)d)
                        printf("%c",text[j]);
                }

                printf("\n");
                //printf("=> %d\n",len);

            }

            t--;
        }

    }

    return 0;
}
