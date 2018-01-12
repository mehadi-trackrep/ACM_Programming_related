#include <stdio.h>
int main()
{
    double x,round_value;
    scanf("%lf",&x);
    if( x - (int)x < 0.5 )
        round_value = (int)x;
    else round_value = (int)x + 1;
    printf("%0.0lf",round_value);

    return 0;
}

