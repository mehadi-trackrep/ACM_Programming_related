#include <stdio.h>
int main()
{
    int rev,ch,n,temp,i,j,ck = 0;

    for(i = 999;i >= 900;i--){
        for(j = 999;j >= 900;j--){
            n = i*j;
            ch = n;
            temp = 0;
            while(1){
                rev = n%10 + temp;
                temp = rev*10;
                n = n/10;
                if(n == 0)
                {
                    break;
                }
            }
            if(ch == rev){
                ck = 1;
                printf("\ni = %d, j = %d\n\n",i,j);
                break;
            }
        }
        if(ck == 1){
            break;
        }
    }

    return 0;
}

