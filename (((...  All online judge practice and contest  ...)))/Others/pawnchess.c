#include <stdio.h>
#include <string.h>
int main()
{
    char board[8][10];
    int i,j,posi_A,posi_B;

    for(i = 0;i < 8;i++)
        gets(board[i]);


    for(i = 1;i < 8;i++){
        for(j = 0;j < 8;j++){
            if(board[i][j] == 'B'){
                if(board[i+1][j] != 'W')
                    posi_B = i;
            }
            else if(board[i][j] == 'W'){
                if(board[i-1][j] != 'B')
                    posi_A = i;
            }
        }
    }
    /*printf("\n");
    for(i = 0;i < 8;i++){
        for(j = 0;j < 8;j++){
            printf("%c",board[i][j]);
        }
        printf("\n");
    }*/

    if(posi_B > 7 - posi_A)
        printf("B");
    else
        printf("A");

    return 0;
}

