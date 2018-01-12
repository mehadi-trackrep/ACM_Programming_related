#include <stdio.h>
int SUM(){
    int a,b;
    scanf("%d%d",&a,&b);
    return a+b;

}
#include <stdio.h>
int SUM();
int main(){

    int a;
    a = SUM();
    printf("%d",a);
    return 0;
}
