        ///INPUT: 11010
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000],copy_str[1000];
    int n,len,i,x,ck,k,one,zero;
    scanf("%s",str);
    len = strlen(str);
    n = 1;
    while(n <= len){
        for(i = 0;i <= len-n;i++){ /// actually len-n porjonto loop cholbe...
            x = i;
            one = 0;
            zero = 0;
            k = 0;
            while(x < i+n){
                if(str[x] == '1')
                    one++;
                if(str[x] == '0')
                    zero++;
                copy_str[k++] = str[x];
                x++;
            }
            if( one != zero){
                copy_str[k] = '\0';
                printf("%s",copy_str);
                if(n < len)
                    printf(",");
            }
        }
        n++;
    }
    return 0;
}
