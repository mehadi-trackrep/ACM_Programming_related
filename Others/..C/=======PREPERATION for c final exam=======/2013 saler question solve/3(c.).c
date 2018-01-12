#include <stdio.h>
int func1(int a,int b,int c){

    int add;
    add = a + b + c;
    return add;

}

int func2(int a,int b,int c){

    int max,min;

    max = (a>b)?((a>c)?a:c):((b>c)?b:c); return max;
    min = (a<b)?((a<c)?a:c):((b<c)?b:c); return min;


}
int func2(int a,int b,int c);
int main(){

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%d %d",func2(a,b,c));

    return 0;
}

