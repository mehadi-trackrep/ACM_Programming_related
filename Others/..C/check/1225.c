#include <stdio.h>
int main()
{
    int i,t,n,digit[15],num,j;

    while(scanf("%d",&t) == 1){

        for(i = 0; i < t; i++){

            scanf("%d",&n);

            for(j = 0;j < 10;j++)
                digit[j] = 0;

            for(j = 1;j <= n;j++){

                if(j >= 1){

                    num = j % 10;
                    j /= 10;

                    if(num == 0){
                        digit[0]++;
                        continue;
                    }

                    else if(num == 1){
                        digit[1]++;
                        continue;
                    }

                    else if(num == 2){
                        digit[2]++;
                        continue;
                    }
                    else if(num == 3){
                        digit[3]++;
                        continue;
                    }
                    else if(num == 4){
                        digit[4]++;
                        continue;
                    }
                    else if(num == 5){
                        digit[5]++;
                        continue;
                    }
                    else if(num == 6){
                        digit[6]++;
                        continue;
                    }
                    else if(num == 7){
                        digit[7]++;
                        continue;
                    }
                    else if(num == 8){
                        digit[8]++;
                        continue;
                    }
                    else if(num == 9)
                        digit[9]++;
                }
            }

            for(j = 0;j < 10;j++)
                printf("%d ",digit[j]);
            printf("\n");
        }
    }

    return 0;
}

/*              k = j;
                d1 = k % 10;
                k /= 10;
                d2 = k % 10;

                if(d1 == 0 || d2 == 0)
                    digit[0]++;

                else if(d1 == 1)
                    digit[1]++;

                else if(d2 == 1)
                    digit[1]++;

                else if(d1 == 2 || d2 == 2)
                    digit[2]++;

                else if(d1 == 3 || d2 == 3)
                    digit[3]++;

                else if(d1 == 4 || d2 == 4)
                    digit[4]++;

                else if(d1 == 5 || d2 == 5)
                    digit[5]++;

                else if(d1 == 6 || d2 == 6)
                    digit[6]++;

                else if(d1 == 7 || d2 == 7)
                    digit[7]++;

                else if(d1 == 8 || d2 == 8)
                    digit[8]++;

                else if(d1 == 9 || d2 == 9)
                    digit[9]++;*/


