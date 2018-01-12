#include <stdio.h>
#include <string.h>
int ara1[100000],ara2[100000],p_sum[100000];
int main()
{
    int n,m;
    int i,j,k,c = 1,d1,d2,ck;

    while(scanf("%d",&n) && n != 0){
        printf("Case %d:\n",c++);
        for(i = 0;i < n;i++)
            scanf("%d",&ara1[i]);
        scanf("%d",&m);
        for(i = 0;i < m;i++)
            scanf("%d",&ara2[i]);
        k = 0;
        for(i = 0;i < n;i++){
            for(j = i+1;j < n;j++){
                p_sum[k++] = ara1[i]+ara1[j];
            }
        }
        for(i = 0;i < k;i++){
            for(j = i+1;j < k;j++){
                if(p_sum[i] > p_sum[j]){
                    p_sum[i] = p_sum[i]^p_sum[j];
                    p_sum[j] = p_sum[i]^p_sum[j];
                    p_sum[i] = p_sum[i]^p_sum[j];
                }
            }
        }

        for(i = 0;i < m;i++){
            ck = 0;
            for(j = 0;j < k-1;j++){
                if(ara2[i] == p_sum[j]){
                    ck = 1;
                    printf("Closest sum to %d is %d.\n",ara2[i],p_sum[j]);
                    break;
                }
                if(ara2[i] < p_sum[j]){
                    ck = 1;
                    printf("Closest sum to %d is %d.\n",ara2[i],p_sum[j]);
                    break;
                }
                if(ara2[i] > p_sum[j] && ara2[i] < p_sum[j+1]){
                    ck = 1;
                    d1 = ara2[i] - p_sum[j];
                    d2 = p_sum[j+1] - ara2[i];
                    if(d1 < d2)
                        printf("Closest sum to %d is %d.\n",ara2[i],p_sum[j]);
                    else
                        printf("Closest sum to %d is %d.\n",ara2[i],p_sum[j+1]);
                    break;
                }
            }
            if(ck != 1)
                printf("Closest sum to %d is %d.\n",ara2[i],p_sum[k-1]);
        }
    }

    return 0;
}
