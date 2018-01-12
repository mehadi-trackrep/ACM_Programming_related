#include <stdio.h>
int main()
{
    int n,num[3],c = 0,i,j; /// s == salary

    scanf("%d",&n);

    while(c != n){

        for(i = 0 ; i < 3 ; i++)
            scanf("%d",&num[i]);

        for(i = 0 ; i < 3 ; i++){

            for(j = i+1 ; j < 3 ; j++){

                if(num[i] > num[j]){

                    num[i] = num[i] ^ num[j];
                    num[j] = num[i] ^ num[j];
                    num[i] = num[i] ^ num[j];
                }

            }
        }

        printf("Case %d: %d\n",++c,num[1]);
    }

    return 0;
}
