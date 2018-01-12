#include <stdio.h>
int main()
{
    int t,n,a,b,c,sum; /// a means farmyard
                /// b means num_of_animal, c means envimnt_of_frindliness;

    scanf("%d",&t);

    while(t--){
        scanf("%d",&n);
        sum = 0;
        while(n--){
            scanf("%d%d%d",&a,&b,&c);
            sum += a*c;
        }
        printf("%d\n",sum);
    }

    return 0;
}
