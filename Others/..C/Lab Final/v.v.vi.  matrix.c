#include <stdio.h>
int mat[1005][1005];
int main(void)
{
    int n,m,i,j,one = 0,zero = 0,k;

    scanf("%d%d",&n,&m);

    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++)
            scanf("%d",&mat[i][j]);
    }

    /// a no.

    for(i = 0;i < n;i++){
        for(j = 0;j < m;j++){
            if(mat[i][j] == 1)
                one++;
            else
                zero++;
        }

    }

    printf("Number of ZERO's are %d and ONE's are %d and\n",zero,one);

    /// b no.

    int r1,c1,count,max_count = 0,r,c;

    for(i = 0;i < n;i++){
            count = 0;
        for(j = 0;j < m-1;j++){
            if(mat[i][j] == 1){
                r1 = i;
                c1 = j; //printf("=> %d %d \n",r1,c1);
                while(mat[i][j++] != 0){
                    count++;
                }
            }

            else;
        }

            if(count > max_count){
                max_count = count;
                r = r1;
                c = c1;
            }
    }

    printf("Maximum consecutive ONE's along the horizontal direction are: %d and Starting position: %d %d\n",max_count,r,c);


    /// c no.

    max_count = 0;
    for(i = 0;i < m;i++){
            count = 0;
        for(j = 0;j < n-1;j++){
            if(mat[i][j] == 1){
                r1 = i;
                c1 = j;
                while(mat[i++][j] != 0){
                    count++;
                }
            }

            else;
        }

            if(count > max_count){
                max_count = count;
                r = r1;
                c = c1;
            }
    }

    printf("Maximum consecutive ONE's along the vertical direction are: %d and Starting position: %d %d\n",max_count,r,c);

    /// d no.

    max_count = 0;
    for(i = 0;i < n;i++){
            count = 0;
            k = i;
        for(j = 0;j < m-1;j++){
            if(mat[i][j] == 1){
                r1 = i;
                c1 = j;
                while(mat[k++][j++] != 0 && j <= m){
                    count++;
                }
            }

            else;
        }

            if(count > max_count){
                max_count = count;
                r = r1;
                c = c1;
            }
    }

    printf("Maximum consecutive ONE's along the diagonal direction are: %d and Starting position: %d %d\n",max_count,r,c);

    /// e no.

   max_count = 0;
    for(i = 0;i < n;i++){
            count = 0;
            k = i;
        for(j = m-1;j >= 0;j--){
            if(mat[i][j] == 1){
                r1 = i;
                c1 = j;
                while(mat[k++][j--] != 0 && j >= 0){
                    count++;
                }
            }

            else;
        }

            if(count > max_count){
                max_count = count;
                r = r1;
                c = c1;
            }
    }

    printf("Maximum consecutive ONE's along the anti diagonal direction are: %d and Starting position: %d %d\n",max_count,r,c);

    return 0;
}


