#include <stdio.h>
int count_digit(int a,int b,int c);
int total_digit_of_b;
int main()
{
    int n,x,total,i,j,C = 1;
    int total_digit;
    double avg;

    while(scanf("%d",&n) && n != 0){
        total = 0;
        for(i = 0;i < n;i++){
            scanf("%d",&x);
            total += x;
        }
        avg = total/n;

        if(avg < 0){
            avg *= (-1);
        }

        if(avg - (int)avg == 0){
            printf("Case %d:\n%d\n",C++,(int)avg);
            continue;
        }
        if(avg > 1){
            a = (int)avg;
            c = n;
            b = total - a*c;
            printf("Case %d:\n",C++);
            total_digit = count_digit(a,b,c);
            while(total_digit--)
                printf(" ");
            printf("%d\n%d",b,a);
            while(total_digit_of_b--)
                printf("-");

            continue;
        }
    }

    return 0;
}

int count_digit(int a,int b,int c){

    int total = 0,i;

    total_digit_of_b = 0;

    while(a >= 1){
        a /= 10;
        total++;
    }
    while(b >= 1){
        b /= 10;
        total_digit_of_b++;
    }
    total += total_digit_of_b;
    while(c >= 1){
        c /= 10;
        total--;
    }
    return total;
}
