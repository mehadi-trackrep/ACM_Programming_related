#include <stdio.h>
int fibo(int n,int a,int b){

    int c,count = 1,i;

    for(i = 2;i <= n;i++){

        c = a+b;
        a = b;
        b = c;

    }
    if(n == 0)
        return a;
    else
        return b;

}

int main()

{
    int n,a,b,c;

    scanf("%d%d%d",&n,&a,&b);

    c = fibo(n,a,b);   /// function calling

    printf("%d",c);


    return 0;
}

