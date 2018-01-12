#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    char str[4];
    int ara[50],t,i,j,k,sum,count,c = 1;
    double root;
    scanf("%d",&t);
    getchar();
    while(t--){
        scanf("%s",str);
        k = 0;
        for(i = 1;i <= 9;i++){
            if(i != (int)str[0] - 48){
                sum = i*1000 + ((int)str[1] - 48)*100 + ((int)str[2] - 48)*10 + ((int)str[3] - 48);
                ara[k++] = sum;
            }
        }
        for(i = 0;i <= 9;i++){
            if(i != (int)str[1] - 48){
                sum = ((int)str[0] - 48)*1000 + i*100 + ((int)str[2] - 48)*10 + ((int)str[3] - 48);
                ara[k++] = sum;
            }
        }
        for(i = 0;i <= 9;i++){
            if(i != (int)str[2] - 48){
                sum = ((int)str[0] - 48)*1000 + ((int)str[1] - 48)*100 + i*10 + ((int)str[3] - 48);
                ara[k++] = sum;
            }
        }
        for(i = 0;i <= 9;i++){
            if(i != (int)str[3] - 48){
                sum = ((int)str[0] - 48)*1000 + ((int)str[1] - 48)*100 + ((int)str[2] - 48)*10 + i;
                ara[k++] = sum;
            }
        }

        ara[k] = -1;
        count = 0;

        for(i = 0;ara[i] != -1;i++){
            root = sqrt(ara[i]);
            if(root-(int)root == 0)
                count++;
        }

        printf("Case %d: %d\n",c++,count);
    }
    return 0;
}
