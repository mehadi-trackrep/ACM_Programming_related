#include <stdio.h>
int main()
{

    int i;
    char *p;

    i = 0X89; /// hex sign hocce 0X? , ? = hex. number

    p = (char *)i;

    p++;

    printf("%X",p);

    return 0;
}
