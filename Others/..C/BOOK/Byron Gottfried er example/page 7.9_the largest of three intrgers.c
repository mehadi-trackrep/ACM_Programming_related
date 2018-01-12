#include <stdio.h>
int max(int a, int b){

    int ch;

    ch = (a>b)? a:b;

    return ch;

}

int main(){

    int a,b,c,m;
    scanf("%d%d%d",&a,&b,&c);
    m = max(a,b);
    printf("%d",max(m,c));
}
