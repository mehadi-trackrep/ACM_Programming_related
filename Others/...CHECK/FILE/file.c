#include<stdio.h>
int main()
{
    FILE *fp, *fp1;
    int a;char c,ch;
    fp=fopen("New.txt","w");
    scanf("%d%c%c",&a,&ch,&c);
    fprintf(fp,"%d%c",a,c);
    fclose(fp);

    fp=fopen("New.txt","r");
    fp1=fopen("Output.txt","w");

    fscanf(fp,"%d%c",&a,&c);
    fprintf(fp1,"%d%c",a,c);

    fclose(fp);
    fclose(fp1);
}
