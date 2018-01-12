#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    int a[10],i;
    fp1 = fopen("input.txt","a+");

    for(i = 0;i < 5;i++)
        fscanf(fp1,"%d",&a[i]);

    fp2 = fopen("output.txt","w+");

    for(i = 0;i < 5;i++)
        fprintf(fp2,"%d ",a[i]);

    fclose(fp1);
    fclose(fp2);

    return 0;
}

