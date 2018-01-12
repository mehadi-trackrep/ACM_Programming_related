#include <stdio.h>
int main()
{
    FILE *fp1,*fp2;
    char str[30];// = "Hello Pranto";
    fp1 = fopen("a.txt","w");
    fp2 = fopen("b.txt","r");
    fscanf(fp1,"%s",str);
    fprintf(fp2,"%s",fp1);

    fclose(fp1);
    fclose(fp2);
    return 0;
}
