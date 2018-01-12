/*#include <stdio.h>
int main(){
    int n,i,ara[100],x,len;
    int count = 1;
    scanf("%d",&n);
    x = n;
    for(i=0;;i++){
        ara[i] = x - x/2;
        x = x/2;
        ///printf("%d",ara[i]);
       if(x == 0)
           break;
        count++;

    }
    for(i=count-1;i>=0;i--)
        printf("%d",ara[i]);

    return 0;
} */

#include <stdio.h>
int main(){
    int n,i,ara[100],count = 0;
    scanf("%d",&n);
    for(i=0;;i++){
       /// ara[i] = n%2;
        ara[i] = n - 2*(n/2);  /// execution time kom lage ///
        n = n/2;
       /// printf("%d",ara[i]);
        count++;
        if(n == 0)
           break;

    }
   for(i=count-1;i>=0;i--)
        printf("%d",ara[i]);

    return 0;
}

