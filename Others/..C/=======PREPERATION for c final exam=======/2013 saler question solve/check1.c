#include <stdio.h>
int main(){
int a,b,c,max,min;
printf("\nEnter 3 numbers:");
scanf("%d %d %d",&a,&b,&c);
//big=(a>b?(a>c?a:c):(b>c?b:c));
max = (a>b)?((a>c)?a:c):((b>c)?b:c);
min = (a<b)?((a<c)?a:c):((b<c)?b:c);
printf("max = %d,min = %d",max,min);
return 0;
}
