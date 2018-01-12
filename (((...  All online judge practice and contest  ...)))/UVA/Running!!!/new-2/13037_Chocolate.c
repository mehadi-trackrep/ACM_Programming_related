#include <stdio.h>
int main()
{
    int t,L,R,S,count1,count2,i,j,ck,k,c = 1;
    int ara1[100],ara2[100],ara3[100],ara4[100];
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&L,&R,&S);
        for(i = 0;i < L;i++)
            scanf("%d",&ara1[i]);
        for(i = 0;i < R;i++)
            scanf("%d",&ara2[i]);
        for(i = 0;i < S;i++)
            scanf("%d",&ara3[i]);

        printf("Case #%d:\n",c++);
        count1 = 0;
        for(i = 0;i < L;i++){ /// ...........
            ck = 0;
            for(j = 0;j < R;j++){
                if(ara1[i] == ara2[j]){
                    ck = 1;
                    break;
                }
            }
            if(ck == 1)
                continue;
            for(j = 0;j < S;j++){
                if(ara1[i] == ara2[j]){
                    ck = 1;
                    break;
                }
            }
            if(ck == 0)
                count1++;
        }
        count2 = 0;
        for(i = 0;i < R;i++){
            for(j = 0;j < S;j++){
                if(ara2[i] == ara3[j]){
                    ara4[count2++] = ara2[i];
                    break;
                }
            }
        }
        k = count2;
        for(i = 0;i < count2;i++){
            for(j = 0;j < L;j++){
                if(ara4[i] == ara1[j])
                    k--;
            }
        }
        printf("%d %d\n",count1,k); /// ...... only 1 part
    }

    return 0;
}
