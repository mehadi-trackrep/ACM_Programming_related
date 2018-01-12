#include <stdio.h>
int main(){

    int k;
    FILE *fp;
    fp = fopen("output.dat","a+");
    for(k = 65;k <= 90;k++)
        fprintf(fp, "%c\n",k);
    fclose(fp);
}
