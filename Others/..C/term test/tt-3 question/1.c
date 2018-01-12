#include <stdio.h>
int main()
{
    FILE *pf;
    int n;
    pf = fopen("a.txt","a");
    fscanf(pf,"%d",n);
    fclose(pf);
    return 0;
}

