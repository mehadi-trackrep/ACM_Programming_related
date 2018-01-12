#include <stdio.h>
#include <string.h>

//char list[20][20],str1[20],str2[20][20];
char list[10][20],str1[20],str2[10][20];
int main()
{

    int t,n,i,j,k,flag = 0;
    int amount,total_amount[15];

    while(scanf("%d",&t) == 1){

        for(i = 0;i < t;i++){
            scanf("%s",list[i]);
            total_amount[i] = 0;
        }

        for(i = 0;i < t;i++){

            scanf("%s",str1);
            scanf("%d%d",&amount,&n);

            //getchar();

            for(j = 0;j < n;j++)
                scanf("%s",str2[j]);

            for(j = 0;j < t;j++)
            {
                if( strcmp(str1,list[j]) == 0 ){
                    if(n != 0)
                        total_amount[j] += amount*(-1) + ( amount - n * (amount/n) );
                    else
                        total_amount[j] += 0;
                    break;
                }
            }

            for(k = 0;k < n;k++)
            {
                for(j = 0;j < t;j++){

                    if(strcmp(str2[k],list[j]) == 0){
                        total_amount[j] += amount/n;
                        break;
                    }
                }
            }


        }

        if (flag == 1)
            printf("\n");
        flag = 1;

        for(i = 0;i < t;i++)
            printf("%s %d\n",list[i],total_amount[i]);

        //printf("\n");

    }

    return 0;
}

/*
5
dave laura owen vick amr
dave 200 3 laura owen vick
owen 500 1 dave
amr 150 2 vick owen
laura 0 2 amr vick
vick 0 0
3
liz steve dave
liz 30 1 steve
steve 55 2 liz dave
dave 0 2 steve liz
*/
