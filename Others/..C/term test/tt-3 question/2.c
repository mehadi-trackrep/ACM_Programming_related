#include <stdio.h>
#include <math.h>
int main()
{
    FILE *pf1,*pf2;

    int i,j,n,ch = 1;

    pf1 = fopen("input.txt","a+");

    fscanf(pf1,"%d",&n);

    pf2 = fopen("output.txt","w+");

    fprintf(pf2,"2 ");

    for(i = 3;i < n;i += 2){
        for(j = 3;j*j <= (i);j += 2){
            if(i % j == 0){
                ch = 0;
                break;
            }
        }
        if(ch != 0)
            fprintf(pf2,"%d ",i);
        ch = 1;
    }

    fclose(pf1);
    fclose(pf2);

    return 0;
}

