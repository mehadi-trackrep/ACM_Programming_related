#include <stdio.h>
int main()
{
    int t,street[30000],i;
    int d,d1,min_d,n,j;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        for(i = 0;i < n;i++){
            scanf("%d",&street[i]);
        }
        min_d = 2147483647;
        for(i = 0;i < n;i++){
            d = 0;
            for(j = 0;j < n;j++){
                d1 = street[i]-street[j];
                if(d1 < 0)
                    d1 *= (-1);
                d += d1;
                /*if(street[i] > street[j]){
                    street[i] = street[i] ^ street[j];
                    street[j] = street[i] ^ street[j];
                    street[i] = street[i] ^ street[j];
                }*/
            }

            if(d < min_d)
                min_d = d;
        }

       printf("%d\n",min_d) ;
    }

    return 0;
}
