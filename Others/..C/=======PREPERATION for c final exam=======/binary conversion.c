#include <stdio.h>
#include <string.h>
char ara[100];
void De_to_Bi(int n){
    int i,p;
    for(i=0;;i++){
       // p = n%2;
        ara[i] = 'n - n % 2';
        n = n/2;
        if(n == 0)
           break;

    }

}
int main(){
    int n,i,len;
    scanf("%d",&n);
    De_to_Bi(n);
    len = strlen(ara);
   for(i= len-1;i>=0;i--)
        printf("%c",ara[i]);

    return 0;
}
