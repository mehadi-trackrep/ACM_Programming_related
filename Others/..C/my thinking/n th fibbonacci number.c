#include <stdio.h>
int main()
{
    int a = 0,b = 1,c,n,i,count = 2,temp;

    scanf("%d",&n);

    for(i=0;;i++){
        c = a + b;

        a = b;
        b = c;

        if(count == n){
            printf("%d",c);
            break;
        }

        count++;
    }

    return 0;
}
