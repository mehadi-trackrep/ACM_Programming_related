#include <stdio.h>
int main()
{

    int n,temp,rev,ch;

    while(scanf("%d",&n)==1){
        ch = n;
        temp = 0;
        while(1){
            rev = n%10 + temp;
            temp = rev*10;
            n = n/10;
            if(n == 0)
            {
              ///  printf("%d\n",rev);
                break;
            }
        }

        if(ch == rev)
            printf("\nThe number %d is pallindrome\n\n",ch);
        else
            printf("\nThe number %d is not pallindrome\n\n",ch);
    }

    return 0;
}
