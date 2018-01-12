#include <stdio.h>
int main()
{
    int r,c,i,j,one = 0,zero = 0;
    int r1,c1,k,count = 0,max_count = 0;
    int ck,l;
    int mat[20][20];
    scanf("%d%d",&r,&c);
   // int mat[r+3][c+3];
    for(i = 0;i < r;i++){
        for(j = 0;j < c;j++)
            scanf("%d",&mat[i][j]);
    }

    for(i = 0;i < r;i++){

        for(j = 0;j < c;j++){
            if(mat[i][j] == 0)
                zero++;
            else
                one++;
        }
    }

    printf("The number of zeros and ones : %d and %d .\n",zero,one);

     for(i = 0;i < r;i++){

        for(j = 0;j < c;j++){

            count = 0;
            ck = 0;

            if(mat[i][j] == 1){

                k = i;
                l = j;

                while( (mat[k++][l++] == 1)){

                    if(l > c)
                        break;
                    count++;
                    ck = 1;
                }

                //printf("r1 = %d , c1 = %d ; count = %d\n",i,j,count);
            }

            if(ck == 1){

                if(count > max_count){

                    max_count = count;

                    r1 = i;
                    c1 = j;

                    //printf(" => => r1 = %d , c1 = %d ; count = %d\n",i,j,max_count);
                }
            }
        }
     }

    printf("The position is : %d ,%d and maximum length is : %d.\n",r1,c1,max_count);

    return 0;
}
