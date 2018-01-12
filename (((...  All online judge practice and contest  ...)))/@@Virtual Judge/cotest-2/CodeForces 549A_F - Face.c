#include <stdio.h>
#include <string.h>
int main()
{
    char ara[55][55];
    int row,colm,i,j,count = 0,f,a,c,e; /// AC

    scanf("%d%d",&row,&colm);

    getchar();

    for(i = 0;i < row;i++){
        for(j = 0;j < colm;j++)
            scanf("%c",&ara[i][j]);
        getchar();
    }

    /*for(i = 0;i < row;i++){
        for(j = 0;j < colm;j++)
            printf("%c",ara[i][j]);
        printf("\n");
    }*/

    if(row >= 2 && colm >= 2){

        for(i = 0;i < row;i++){
            for(j = 0;j < colm;j++){
                f = 0;a = 0;c = 0;e = 0;
                if(ara[i][j] != 'x'){

                    if(ara[i][j] == 'f')
                        f = 1;
                    else if(ara[i][j] == 'a')
                        a = 1;
                    else if(ara[i][j] == 'c')
                        c = 1;
                    else if(ara[i][j] == 'e')
                        e = 1;

                    if(j+1 < colm){
                        if(ara[i][j+1] == 'f')
                            f = 1;
                        else if(ara[i][j+1] == 'a')
                            a = 1;
                        else if(ara[i][j+1] == 'c')
                            c = 1;
                        else if(ara[i][j+1] == 'e')
                            e = 1;
                    }
                    if(i+1 < row){
                        if(ara[i+1][j] == 'f')
                            f = 1;
                        else if(ara[i+1][j] == 'a')
                            a = 1;
                        else if(ara[i+1][j] == 'c')
                            c = 1;
                        else if(ara[i+1][j] == 'e')
                            e = 1;
                    }
                    if(i+1 < row && j+1 < colm){
                        if(ara[i+1][j+1] == 'f')
                            f = 1;
                        else if(ara[i+1][j+1] == 'a')
                            a = 1;
                        else if(ara[i+1][j+1] == 'c')
                            c = 1;
                        else if(ara[i+1][j+1] == 'e')
                            e = 1;
                    }
                }
                if(f == 1 && a == 1 && c == 1 && e == 1)
                    count++;
            }
        }
    }

    printf("%d\n",count);

    return 0;
}
