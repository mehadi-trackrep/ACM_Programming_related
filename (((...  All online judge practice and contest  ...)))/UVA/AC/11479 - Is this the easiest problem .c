#include <stdio.h>

int main()
{
    long int a, b, c;
    int test_case, i;

    while(scanf("%d", &test_case)==1)
    {
        if(test_case>0 && test_case<20)
        {
            for(i=1; i<=test_case; i++)
            {

                scanf("%ld %ld %ld", &a, &b, &c);
                if( a+b>c && b+c>a && c+a>b)
                {
                    if(a==b && b==c && c==a) {printf("Case %ld: Equilateral\n", i);}
                    else if (a!=b && b!=c && c!=a) printf("Case %ld: Scalene\n", i);
                    else if(a==b || b==c || c==a) printf("Case %ld: Isosceles\n", i);
                }
                else {printf("Case %ld: Invalid\n", i);}
            }
        }
    }

}
