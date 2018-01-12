#include <stdio.h>
int GCD(int a,int b);
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);

   /* a = a^b;
    b = a^b;  /// swap with XOR ///
    a = a^b; */

    c = GCD(a,b);
    printf("%d\n",c);

    return main();      /// v.v.i thinking ///
}

int GCD(int a,int b){

    int c;
    while(b>0){
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

