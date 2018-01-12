        /// input :
/*
4 1
2
3
5
1
5
5 2
1
3
3
3
1
2
3
0 0
*/

#include <stdio.h>
int main()
{
    int N,Q,i,c = 1,ck,j;
    int ara1[10000],ara2[10000];

    while(scanf("%d%d",&N,&Q) && N != 0 && Q != 0)
    {
        for(i = 0;i < N;i++)
            scanf("%d",&ara1[i]);
        for(i = 0;i < Q;i++)
            scanf("%d",&ara2[i]);

        for(i = 0;i < N;i++){
            for(j = i+1;j < N;j++){
                if(ara1[i] > ara1[j]){
                    ara1[i] = ara1[i]^ara1[j];
                    ara1[j] = ara1[i]^ara1[j];
                    ara1[i] = ara1[i]^ara1[j];
                }
            }
        }

        printf("CASE# %d:\n",c++);

        for(i = 0;i < Q;i++){
            ck = 0;
            for(j = 0;j < N;j++){
                if(ara2[i] == ara1[j]){
                    ck = 1;
                    printf("%d found at %d\n",ara2[i],j+1);
                    break;
                }
            }

            if(ck == 0)
               printf("%d not found\n",ara2[i]);
        }

    }

    return 0;
}
