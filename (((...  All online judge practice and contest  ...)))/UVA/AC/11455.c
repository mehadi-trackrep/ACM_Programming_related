#include <stdio.h>
int main()
{
    long int a,b,c,d;
    int t,i;

    while(scanf("%d",&t) == 1){
        for(i = 0;i < t;i++){
            scanf("%ld%ld%ld%ld",&a,&b,&c,&d);
            if(a == b && b == c && c == d){
                printf("square\n");
                continue;
            }
            else if( (a == b && c == d) || (b == c && d == a) || (c == a && b == d) ){
                printf("rectangle\n");
                continue;
            }
            else if(a <= b+c+d && b <= c+d+a && c <= d+a+b && d <= a+b+c){
                printf("quadrangle\n");
                continue;
            }
            else
                printf("banana\n");

        }
    }

    return 0;
}

