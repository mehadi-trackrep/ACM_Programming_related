#include <stdio.h>
int main()
{
    double x,floor_value,ceiling_value;
    scanf("%lf",&x);  /// printf("%d\n",(int)x);
    if( x -(int)x != 0 ){
        floor_value = (int)x;
        ceiling_value = (int)x + 1;
    }
    else {
        floor_value = x;
        ceiling_value = (int)x;
    }
    printf("%0.0lf\t",floor_value);
    printf("%0.0lf",ceiling_value);

    return 0;
}
